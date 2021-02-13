
// Problem: A. Letter
// Contest: Codeforces - Codeforces Beta Round #14 (Div. 2)
// URL: https://codeforces.com/contest/14/problem/A
// Memory Limit: 64 MB
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
#define fl(i, a, b) for (ll i = a; i < b; i++)
#define bfl(i, a, b) for (ll i = b - 1; i >= a; i--)
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
  ll n, m;
  cin >> n >> m;
  char a[250][250];
  // n=row	a[r][c]
  fl(i, 1, n + 1) fl(j, 1, m + 1) { cin >> a[i][j]; }
  ll w = 10000, x, y = 10000, z;
  fl(i, 1, n + 1) fl(j, 1, m + 1) {
    if (a[i][j] == '*') {
      w = min(w, i);
      x = max(x, i);
      y = min(y, j);
      z = max(z, j);
    }
  }
  for (int i = w; i <= x; i++) {
    for (int j = y; j <= z; j++) {
      cout << a[i][j];
    }
    cout << endl;
  }
}

int32_t main() {
  lage_rho();
  solve();
  return 0;
}