// //
// // // Problem: Watching CPL
// // // Contest: CodeChef - January Challenge 2021 Division 3
// // // URL: https://www.codechef.com/JAN21C/problems/WIPL
// // // Memory Limit: 256 MB
// // // Time Limit: 1000 ms
// //
// // // Handle Name: Scortier (Aditya Singh Sisodiya)
// // #include <bits/stdc++.h>
// //
// // #include <chrono>
// // using namespace std;
// // using namespace chrono;
// // #define endl "\n"
//
// // #define ll long long int
// // #define fl(i, a, b) for (ll i = a; i < b; i++)
// // #define bfl(i, a, b) for (ll i = b - 1; i >= a; i--)
// // #define pb push_back
// // #define mp make_pair
// // #define f first
// // #define s second
// // #define MOD 1000000007
// // #define PI acos(-1.0)
// // #define assign(x, val) memset(x, val, sizeof(x))
// // #define prec(val, dig) fixed << setprecision(dig) << val
// // #define pi pair<int, int>
// // #define pr(gg) cout << gg << endl
// // #define mk(arr, n, type) type *arr = new type[n];
// // #define e endl
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
// /*
// ll possible_combn(ll x, ll a[], ll n) {
// ll possible_sum[x + 1] = {'\0'};
//
// possible_sum[0] = 1;
//
// fl(i, 0, n) {
// for (ll j = x; j >= a[i]; j--) {
// if (possible_sum[j - a[i]] == 1) possible_sum[j] = 1;
// }
// }
// return possible_sum[x];
// }
//
// void solve() {
// ll n, k;
// cin >> n >> k;
// ll sum = 0, ans = 0;
// ll a[n] = {'\0'};
// fl(i, 0, n) {
// cin >> a[i];
// sum += a[i];
// }
// sort(a, a + n, greater<>());
//
// if (n == 1 or sum < 2 * k) {
// pr(-1);
// return;
// }
// // sum==2*k then sum must be even
// else if (sum == 2 * k) {
// if (sum % 2 == 1 or a[0] > k) {
// pr(-1);
// return;
// }
// // exact possible case
// else if (a[0] == k) {
// pr(n);
// }
//
// else {
// // true or say
// if (possible_combn(k, a, n)) {
// pr(n);
// return;
// } else {
// pr(-1);
// return;
// }
// }
// }
// // one height is made only made second height from other remaining ele
// else if (a[0] >= k) {
// ans = 1;
// ll tempsum = 0;
// fl(i, 1, n) {
// tempsum += a[i];
// ans++;
// if (tempsum >= k) {
// pr(ans);
// return;
// }
// }
// } else {
// // goto that ele where tempsum val become greater than 2*k
// ll tempsum = 0;
// fl(i, 0, n) {
// tempsum += a[i];
// if (tempsum >= 2 * k) {
// pr(i + 1);
// return;
// }
// }
// pr(-1);
// }
// }
// */
//
// ll dp[4020][4020];
// ll pref[4020];
//
// ll DFN(ll idx, ll taken, ll n, ll k, vector<ll> &arr) {
// if (taken >= k and (pref[idx] - taken >= k))
// return 0;
// else if (idx >= n)
// return 1e10;
// else if (dp[idx][taken] != -1)
// return dp[idx][taken];
//
// // so now two choice again
// ll c1 = DFN(idx + 1, min(taken + arr[idx], pref[idx] - taken), n, k, arr);
// ll c2 = DFN(idx + 1, min(pref[idx] - taken + arr[idx], taken), n, k, arr);
//
// return dp[idx][taken] = 1 + min(c1, c2);
// }
//
// ll givemedp(vector<ll> &arr, ll n, ll k) {
// fl(i, 0, n / 2) swap(arr[i], arr[n - i - 1]);
// for (ll i = 0; i <= n + 10; i++) {
// pref[i] = 0;
// for (ll j = 0; i <= k + 10; j++) dp[i][j] = -1;
// }
// for (ll i = 1; i <= n; i++) pref[i] = pref[i - 1] + arr[i - 1];
// ll ans = DFN(0, 0, n, k, arr);
// return ans > 1e9 ? -1 : ans;
// }
//
// void solve() {
// ll n, k;
// cin >> n >> k;
// vector<ll> arr(n, 0);
// fl(i, 0, n) cin >> arr[i];
// sort(arr.begin(), arr.end());
// if (n == 1) {
// pr(-1);
// return;
// }
// pr(givemedp(arr, n, k));
// }
//

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
  cout << givemedp(arr, n, k) << endl;
}
int32_t main() {
  lage_rho();
  test solve();
  return 0;
}
// int main() {
// #ifndef ONLINE_JUDGE
// // freopen("input.txt","r",stdin);
// // freopen("output.txt","w",stdout);
// #endif
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// auto start1 = high_resolution_clock::now();
// test(solve);
// auto stop1 = high_resolution_clock::now();
// auto duration = duration_cast<microseconds>(stop1 - start1);
// #ifndef ONLINE_JUDGE
// cerr << "Time: " << duration.count() / 1000.0 << endl;
// // cout << duration.count() / 1000.0 << endl;
// #endif
// }