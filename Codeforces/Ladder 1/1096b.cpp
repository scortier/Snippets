
// Problem: B. Substring Removal
// Contest: Codeforces - Educational Codeforces Round 57 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1096/problem/B
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
  int n;
  string s;
  cin >> n >> s;
  int cntl = 0, cntr = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == s[0]) {
      ++cntl;
    } else {
      break;
    }
  }
  for (int i = n - 1; i >= 0; --i) {
    if (s[i] == s[n - 1]) {
      ++cntr;
    } else {
      break;
    }
  }
  if (s[0] == s[n - 1]) {
    cout << ((cntl + 1) * 1ll * (cntr + 1)) % 998244353 << endl;
  } else {
    cout << (cntl + cntr + 1) % 998244353;
  }
}

int32_t main() {
  lage_rho();
  // test
  solve();
  return 0;
}