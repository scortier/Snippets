
// Problem: C - Digital Graffiti
// Contest: AtCoder - AtCoder Beginner Contest 191
// URL: https://atcoder.jp/contests/abc191/tasks/abc191_c
// Memory Limit: 1024 MB
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
  // pr("1");
  int r, c;
  cin >> r >> c;
  char a[r][c];
  fl(i, 0, r) {
    fl(j, 0, c) { cin >> a[i][j]; }
  }
  // fl(i, 0, r) {
  // fl(j, 0, c) { cout << a[i][j]; }
  // }

  int u = 0, rr = 0, d = 0, l = 0, x = 0, y = 0;
  for (int i = 1; i < r; i++) {
    if (a[i][1] == '#') l++;

    if (a[i][c - 2] == '#') rr++;
  }
  for (int j = 1; j < c; j++) {
    if (a[1][j] == '#') u++;
    if (a[r - 2][j] == '#') d++;
  }
  // cout << l << u << rr << d << endl;
  x = min(u, d);
  y = min(l, rr);
  int z = max(x, y);
  pr(z + 1);
}

int32_t main() {
  lage_rho();
  // test
  solve();
  return 0;
}