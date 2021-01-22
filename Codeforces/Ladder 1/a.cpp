
// Problem: A. Minimum Binary Number
// Contest: Codeforces - Educational Codeforces Round 43 (Rated for Div. 2)
// URL: https://codeforces.com/contest/976/problem/A
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
  cin >> n;
  string s;
  cin >> s;

  if (n == 1)
    cout << s << endl;
  else {
    int cnt0 = 0;
    fl(i, 0, n) cnt0 += (s[i] == '0');
    cout << 1;
    fl(i, 0, cnt0) cout << 0;
    cout << endl;
  }
  // string x = "";
  // cin >> s;
  // sort(s.begin(), s.end(), greater<int>());
  // int i = 0;
  // while (i < n) {
  // if (s[i] == '1' and s[i + 1] == '1')
  // x[i] = s[i + 1];
  // else
  // x[i] = s[i];
  // i++;
  // }
  // pr(x);
}

int32_t main() {
  lage_rho();
  // test
  solve();
  return 0;
}