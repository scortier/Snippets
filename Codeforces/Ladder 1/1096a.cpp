
// Problem: A. Find Divisible
// Contest: Codeforces - Educational Codeforces Round 57 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1096/problem/A
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
  int l, r;
  cin >> l >> r;
  // int x = l, y = r;
  // while (x < y) {
  // if (y % x == 0 and x != y) {
  // cout << x << " " << y << endl;
  // return;
  // }
  // x++;
  // y--;
  // }
  cout << l << " " << 2 * l << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}