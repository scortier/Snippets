// Problem: B. M-arrays
// Contest: Codeforces - Codeforces Round #708 (Div. 2)
// URL: https://codeforces.com/contest/1497/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// Handle: Scortier (Aditya Singh Sisodiya)
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define test \
  int tt;    \
  cin >> tt; \
  while (tt--)
#define ll long long int
#define fl(i, a, b) for (int i = a; i < b; i++)
#define bfl(i, a, b) for (int i = b - 1; i >= a; i--)
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
#define e endl
void lage_rho() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

void solve() {
  int n, m;
  cin >> n >> m;
  map<int, int> cnt;
  while (n--) {
    int x;
    cin >> x;
    cnt[x % m]++;
  }
  int ans = 0;
  for (auto &c : cnt) {
    if (c.first == 0)
      ans++;
    else if (2 * c.first == m) {
      ans++;
    } else if (2 * c.first < m || cnt.find(m - c.first) == cnt.end()) {
      int x = c.second, y = cnt[m - c.first];
      ans += 1 + max(0, abs(x - y) - 1);
    }
  }
  cout << ans << '\n';
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}