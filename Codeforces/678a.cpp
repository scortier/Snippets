
// Problem: A. Johny Likes Numbers
// Contest: Codeforces - Educational Codeforces Round 13
// URL: https://codeforces.com/contest/678/problem/A
// Memory Limit: 256 MB
// Time Limit: 500 ms
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

void solve() {
  int n, k;
  cin >> n >> k;
  // int x = n;
  // while (x) {
  // if (x > n and x % k == 0) {
  // pr(x);
  // break;
  // } else
  // x++;
  // }
  pr((n / k + 1) * k);
}

int32_t main() {
  lage_rho();

  solve();
  return 0;
}