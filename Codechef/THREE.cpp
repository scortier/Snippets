
// Problem: Three Letters
// Contest: CodeChef - December Lunchtime 2020 Division 2
// URL: https://www.codechef.com/LTIME91B/problems/THREE
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
#define fl(i, a, b) for (int i = a; i < b; i++)
#define bfl(i, a, b) for (int i = b - 1; i >= a; i--)
#define ll long long int
#define pb push_back
#define mpp make_pair
#define f first
#define s second
#define MOD 1000000007
#define PI acos(-1.0)
#define assign(x, val) memset(x, val, sizeof(x))
#define prec(val, dig) fixed << setprecision(dig) << val
#define pi pair<int, int>
#define pr(gg) cout << gg << endl
#define mk(arr, n, type) type *arr = new type[n];

void lage_rho() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  int cnt = 0;
  map<char, int> mp;
  for (int i = 0; i < n; i++) {
    mp[s[i]]++;

    if (mp[s[i]] % 2 == 0 and mp[s[i]] != 0) cnt++;
  }

  cout << min(n / 3, cnt) << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}