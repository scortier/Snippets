
// Problem: Team Name
// Contest: CodeChef - February Challenge 2021 Division 2
// URL: https://www.codechef.com/FEB21B/problems/TEAMNAME
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
/*
void solve() {
  int n;
  cin >> n;
  vector<string> a(n);
  fl(i, 0, n) cin >> a[i];
  int ans = 0;
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      string x = a[i];
      string y = a[j];
      swap(x[0], y[0]);
      if (x[0] == y[0] or x == y) {
      } else if ((!(binary_search(a.begin(), a.end(), x))) and
                 (!(binary_search(a.begin(), a.end(), y)))) {
        ans += 2;
      }
      // if (find(a.begin(), a.end(), x) != a.end() or
      // (find(a.begin(), a.end(), y) != a.end()))
      // continue;
      // else
      // ans += 2;
    }
  }
  pr(ans);
}
*/

int func(vector<char> a, vector<char> b) {
  set<char> s(a.begin(), a.end());

  int cnt = 0;
  for (auto x : b) {
    if (s.find(x) != s.end()) cnt++;
  }
  return cnt;
}
void solve() {
  int n;
  cin >> n;
  vector<string> a(n);
  map<string, vector<char>> mp;
  string s;
  fl(i, 0, n) {
    cin >> s;
    if (s.size() > 0) {
      mp[s.substr(1)].pb(s[0]);
    }
  }

  int ans = 0;
  for (auto x : mp) {
    for (auto y : mp) {
      if (x.first != y.first) {
        int tmp = func(x.second, y.second);
        ans += (x.second.size() - tmp) * (y.second.size() - tmp);
      }
    }
  }
  pr(ans);
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}