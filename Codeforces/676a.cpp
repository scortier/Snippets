
// Problem: A. Nicholas and Permutation
// Contest: Codeforces - Codeforces Round #354 (Div. 2)
// URL: https://codeforces.com/contest/676/problem/A
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
#define int ll
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

// void solve() {
// int n;
// cin >> n;
// int a[n];
// fl(i, 0, n) cin >> a[i];
// int maxm = 0, minm = MOD;
// int x = 0, y = 0;
// fl(i, 0, n) {
// if (a[i] > maxm) {
// x = i;
// maxm = a[i];
// }
// // maxm=max(maxm,a[i]);
// // minm=min(minm,a[i]);
// else if (a[i] < minm) {
// y = i;
// minm = a[i];
// }
// }
// int z =
// max(max(abs(maxm - x), abs(maxm - y)), max(abs(minm - x), abs(minm - y)));
// pr(z);
// }

void solve() {
  int n;
  cin >> n;
  int ans = 0;
  fl(i, 1, n + 1) {
    int x;
    cin >> x;
    if (x == 1 || x == n) {
      ans = max(ans, i - 1);
      ans = max(ans, n - i);
    }
  }
  pr(ans);
}
int32_t main() {
  lage_rho();
  solve();
  return 0;
}