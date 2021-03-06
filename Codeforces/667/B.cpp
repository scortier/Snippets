
// Problem: B. Minimum Product
// Contest: Codeforces - Codeforces Round #667 (Div. 3)
// URL: https://codeforces.com/contest/1409/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

// Handle: Scortier (Aditya Singh Sisodiya)
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define test \
  int tt;    \
  cin >> tt; \
  while (tt--)
#define fl(i, a, b) for (int i = a; i < b; i++)
#define bfl(i, a, b) for (int i = b - 1; i >= a; i--)
#define ll long long int
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define MOD 1000000007
#define PI acos(-1.0)
#define assign(x, val) memset(x, val, sizeof(x))
#define prec(val, dig) fixed << setprecision(dig) << val
#define pi pair<int, int>
#define pr(gg) cout << gg << endl
#define mk(arr, n, type) type *arr = new type[n];

void lage_rho() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

void solve() {
  int a, b, x, y, n;
  cin >> a >> b >> x >> y >> n;
  ll ans = 1e18;
  for (int i = 0; i < 2; ++i) {
    int da = min(n, a - x);
    int db = min(n - da, b - y);
    ans = min(ans, (a - da) * 1ll * (b - db));
    swap(a, b);
    swap(x, y);
  }
  cout << ans << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}