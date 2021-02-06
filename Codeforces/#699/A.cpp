
// Problem: A. Space Navigation
// Contest: Codeforces - Codeforces Round #699 (Div. 2)
// URL: https://codeforces.com/contest/1481/problem/0
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
  int x, y, r = 0, u = 0, d = 0, l = 0;
  cin >> x >> y;
  string s;
  cin >> s;
  int n = s.size();

  fl(i, 0, n) {
    if (s[i] == 'R')
      r++;
    else if (s[i] == 'U')
      u++;
    else if (s[i] == 'D')
      d++;
    else if (s[i] == 'L')
      l++;
  }
  if (x > 0 and r >= x) {
    if (y > 0 and u >= y)
      pr("YES");
    else if (y < 0 and d >= abs(y))
      pr("YES");
  } else if (x < 0 and l >= abs(x)) {
    if (y > 0 and u >= y)
      pr("YES");
    else if (y < 0 and d >= abs(y))
      pr("YES");
  } else if (x == 0) {
    if (y > 0 and u >= y)
      pr("YES");
    else if (y < 0 and d >= abs(y))
      pr("YES");
  } else if (y == 0) {
    if (x > 0 and r >= x)
      pr("YES");
    else if (x < 0 and l >= abs(x))
      pr("YES");
  } else
    pr("NO");
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}