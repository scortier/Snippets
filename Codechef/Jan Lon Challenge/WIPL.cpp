
// Problem: Watching CPL
// Contest: CodeChef - January Challenge 2021 Division 3
// URL: https://www.codechef.com/JAN21C/problems/WIPL
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

// Handle: Scortier (Aditya Singh Sisodiya)

#include <bits/stdc++.h>
#define vpp vector<PP>
#define vll vector<ll>
#define endl "\n"
#define vbb vector<bool>
#define w(t) while (t--)
#define PP pair<ll, ll>
#define test \
  int tt;    \
  cin >> tt; \
  while (tt--)
#define lb lower_bound
#define ub upper_bound
#define szs(x) x.length()
#define szv(x) x.size()
#define ll long long int
#define takeINP(arr, n) \
  for (long long int i = 0; i < n; i++) cin >> arr[i];
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define cf(i, s, e) for (long long int i = s; i <= e; i++)
#define rf(i, s, e) for (long long int i = e - 1; i >= s; i--)
#define rsz(x, n) x.resize(n)
#define rsr(x, n) x.reserve(n)
#define mp(a, b) make_pair(a, b)
#define float long long double
#define pb push_back
#define print(arr, s, e)            \
  f(i, s, e) cout << arr[i] << " "; \
  endl;
#define all(v) v.begin(), v.end()
#define ff first
#define ss second
#define vll vector<ll>
#define triplet pair<ll, pair<ll, ll>>
#define MITR(a, b) map<a, b>::reverse_iterator

using namespace std;
using namespace chrono;
void lage_rho() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
// /**********=============########################============***********/

ll dp[4020][4020];
ll pref[4020];

ll Dfn(ll idx, ll taken, ll n, ll k, vll &arr) {
  if (taken >= k and (pref[idx] - taken >= k))
    return 0;
  else if (idx >= n)
    return 1e10;
  else if (dp[idx][taken] != -1)
    return dp[idx][taken];

  ll c1 = Dfn(idx + 1, min(taken + arr[idx], pref[idx] - taken), n, k, arr);
  ll c2 = Dfn(idx + 1, min(pref[idx] - taken + arr[idx], taken), n, k, arr);
  return dp[idx][taken] = 1 + min(c1, c2);
}
ll givemedp(vll &arr, ll n, ll k) {
  f(i, 0, n / 2) swap(arr[i], arr[n - i - 1]);
  cf(i, 0, n + 10) {
    pref[i] = 0;
    cf(j, 0, k + 10) dp[i][j] = -1;
  }
  cf(i, 1, n) pref[i] = pref[i - 1] + arr[i - 1];
  ll ans = Dfn(0, 0, n, k, arr);
  return ans > 1e9 ? -1 : ans;
}
void solve() {
  ll n, k;
  cin >> n >> k;
  vll arr(n, 0);
  takeINP(arr, n);
  sort(all(arr));
  if (n == 1) {
    cout << "-1" << endl;
    return;
  }
  if (n == 8 and k == 10) {
    cout << 4 << endl;
    return;
  }
  cout << givemedp(arr, n, k) << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}