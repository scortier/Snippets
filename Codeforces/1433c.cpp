
// Problem: C. Dominant Piranha
// Contest: Codeforces - Codeforces Round #677 (Div. 3)
// URL: https://codeforces.com/contest/1433/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
  int n;
  cin >> n;
  vector<int> a(n);
  int maxm = 0;
  for (auto &t : a) {
    cin >> t;
    maxm = max(maxm, t);
  }
  int index = -1;
  for (int i = 0; i < n; ++i) {
    if (a[i] != maxm) continue;
    if (i > 0 and a[i - 1] != maxm) index = i + 1;
    if (i < n - 1 and a[i + 1] != maxm) index = i + 1;
  }
  cout << index << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}