
// Problem: A. The Way to Home
// Contest: Codeforces - Testing Round #14 (Unrated)
// URL: https://codeforces.com/contest/910/problem/A
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
int dp[101];
int n, d;
string s;
int sol(int i) {
  if (i == n - 1) return 0;
  if (dp[i]) return dp[i];
  int ans = 1e9;

  for (int j = i + 1; j < min(i + d + 1, n); j++)
    if (s[j] == '1') ans = min(ans, 1 + sol(j));
  dp[i] = ans;
  return ans;
}

void solve() {
  cin >> n >> d;
  cin >> s;
  int ans;
  ans = sol(0);
  if (ans == 1e9)
    pr("-1");
  else
    pr(ans);
}

int32_t main() {
  lage_rho();
  solve();
  return 0;
}