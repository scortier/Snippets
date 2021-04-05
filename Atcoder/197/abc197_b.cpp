// Problem: B - Visibility
// Contest: AtCoder - AtCoder Beginner Contest 197（Sponsored by Panasonic）
// URL: https://atcoder.jp/contests/abc197/tasks/abc197_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

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
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  char a[h][w];
  int d = 0;
  fl(i, 0, h) fl(j, 0, w) cin >> a[i][j];
  for (int i = x - 1; i < h; i++) {
    if (a[i][y - 1] == '#')
      break;
    else
      d++;
  }
  // pr(d);
  for (int i = x - 1; i >= 0; i--) {
    if (a[i][y - 1] == '#')
      break;
    else
      d++;
  }
  // pr(d);
  int c = 0;
  for (int i = y - 1; i < w; i++) {
    if (a[x - 1][i] == '#') {
      c++;
      break;
    } else
      d++;
  }
  // pr(d);
  // pr(c);
  for (int i = y - 1; i >= 0; i--) {
    if (a[x - 1][i] == '#')
      break;
    else
      d++;
  }
  pr(d - 3);
}

void ff() {}
int32_t main() {
  lage_rho();
  solve();
  return 0;
}