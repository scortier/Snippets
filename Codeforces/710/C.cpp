// Problem: C. Double-ended Strings
// Contest: Codeforces - Codeforces Round #710 (Div. 3)
// URL: https://codeforces.com/contest/1506/problem/C
// Memory Limit: 256 MB
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

int func(string &s, string &t, int n, int m) {
  int dp[n + 1][m + 1];
  int res = 0;
  fl(i, 0, n + 1) {
    fl(j, 0, m + 1) {
      if (i == 0 or j == 0)
        dp[i][j] = 0;
      else if (s[i - 1] == t[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
        res = max(res, dp[i][j]);
      } else
        dp[i][j] = 0;
    }
  }
  return res;
}

void solve() {
  string s, t;
  cin >> s >> t;
  int n = s.size();
  int m = t.size();
  cout << n + m - 2 * func(s, t, n, m) << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}