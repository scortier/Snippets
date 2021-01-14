
// Problem: A. Complicated GCD
// Contest: Codeforces - Codeforces Round #347 (Div. 2)
// URL: https://codeforces.com/contest/664/problem/A
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
// a < b — we have
// gcd(a, a + 1, a + 2, ..., b) = gcd(gcd(a, a + 1), a + 2, ..., b) = gcd(1, a + 2, ..., b) = 1.
void solve() {
  string a, b;
  cin >> a >> b;
  (a == b) ? pr(a) : pr(1);
}

int32_t main() {
  lage_rho();
  solve();
  return 0;
}