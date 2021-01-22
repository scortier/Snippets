
// Problem: A. Dreamoon and Stairs
// Contest: Codeforces - Codeforces Round #272 (Div. 2)
// URL: https://codeforces.com/contest/476/problem/A
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
  int L = (n + 1) / 2, R = n;
  for (int i = L; i <= R; ++i) {
    if (i % m == 0) {
      cout << i << '\n';
      return;
    }
  }
  cout << -1 << '\n';
  // return 0;
}

int32_t main() {
  lage_rho();
  // test
  solve();
  return 0;
}