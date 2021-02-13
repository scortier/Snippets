
// Problem: A. K-divisible Sum
// Contest: Codeforces - Educational Codeforces Round 103 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1476/problem/A
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
  int n, k;
  cin >> n >> k;
  // int a[n];
  // fl(i, 0, n) cin >> a[i];
  if (n == 1) {
    pr(k);
    return;
  }

  else if (n > 1) {
    if (n == k)
      pr("1");
    else if (n > k) {
      // pr(k - 1);
      // int y = n / k;
      // if (n % k) {
      // pr(y + 1);
      pr("2");
      // } else {
      // pr(y - 1);
      // }
    } else {
      // int x = k / n;
      // if (k % n) {
      // pr(x + 1);
      // } else {
      // pr(x);
      // }
      pr("3");
    }
  }
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}