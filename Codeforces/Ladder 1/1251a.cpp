// Problem: A. Broken Keyboard
// Contest: Codeforces - Educational Codeforces Round 75 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1251/problem/A
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
bool ans[26];
void solve() {
  string s;
  cin >> s;

  memset(ans, 0, sizeof(ans));

  for (int i = 0; i < s.size(); i++) {
    int j = i;
    while (j + 1 < s.size() && s[j + 1] == s[i]) j++;
    if ((j - i) % 2 == 0) ans[s[i] - 'a'] = true;
    i = j;
  }

  for (int i = 0; i < 26; i++)
    if (ans[i]) cout << char('a' + i);
  cout << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}