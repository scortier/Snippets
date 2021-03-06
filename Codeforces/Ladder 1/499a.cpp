// Problem: A. Watching a movie
// Contest: Codeforces - Codeforces Round #284 (Div. 2)
// URL: https://codeforces.com/contest/499/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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

int a, b;
void solve() {
  int n, x;
  cin >> n >> x;
  int curr = 1;
  int d = 0;
  while (n--) {
    cin >> a >> b;
    while (curr + x <= a) {
      curr += x;
    }
    while (curr < a) {
      d++;
      curr++;
    }
    d += (b - a + 1);
    curr = b + 1;
  }
  pr(d);
}

int32_t main() {
  lage_rho();
  // test
  solve();
  return 0;
}