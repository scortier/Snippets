
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
#define ll int
#define endl '\n'
#define vi vector<ll>
#define pii pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define fill(a, b) memset(a, b, sizeof(a))
#define setbits(x) __builtin_popcountll(x)
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

const ll N = 4e3 + 4;
ll n, k, a[N], pre[N], dp[N][N];
ll call(ll i, ll j) {
  if (j >= k) {
    ll temp = j + k;
    if ((pre[i - 1] - j) >= k) return i - 1;
    ll p = lower_bound(pre + 1, pre + n + 1, temp) - pre;
    return p;
  }
  if (i == n + 1) return n + 1;
  if (dp[i][j] != -1) return dp[i][j];
  ll rtn = n + 1;
  rtn = min(rtn, call(i + 1, j + a[i]));
  rtn = min(rtn, call(i + 1, j));
  return dp[i][j] = rtn;
}
int main() {
  lage_rho();
  ll t;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) {
      cin >> a[i];
      if (a[i] > k) a[i] = k;
    }
    sort(a + 1, a + n + 1);
    reverse(a + 1, a + n + 1);
    pre[0] = 0;
    for (ll i = 1; i <= n; i++) pre[i] = a[i] + pre[i - 1];
    for (ll i = 1; i <= n; i++) {
      for (ll j = 0; j <= k; j++) {
        dp[i][j] = -1;
      }
    }
    ll ans = call(1, 0);
    if (ans == (n + 1)) {
      cout << -1 << endl;
    } else
      cout << ans << endl;
  }
  return 0;
}
