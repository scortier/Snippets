
// Problem: C - Mandarin Orange
// Contest: AtCoder - AtCoder Beginner Contest 189
// URL: https://atcoder.jp/contests/abc189/tasks/abc189_c
// Memory Limit: 1024 MB
// Time Limit: 1500 ms
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
int a[10010];
void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];

  int ans = 0;
  fl(l, 0, n) {
    int x = a[l];
    for (int r = l; r < n; r++) {
      x = min(x, a[r]);
      ans = max(ans, x * (r - l + 1));
    }
  }
  pr(ans);
}

int32_t main() {
  lage_rho();
  solve();
  return 0;
}