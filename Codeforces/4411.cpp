
// Problem: A. Valera and Antique Items
// Contest: Codeforces - Codeforces Round #252 (Div. 2)
// URL: https://codeforces.com/contest/441/problem/A
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
#define forn(i, n) for (int i = 0; i < int(n); ++i)
void lage_rho() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

void solve() {
  int n, v;
  cin >> n >> v;

  vector<int> ans;

  forn(i, n) {
    bool u = false;
    int k, s;
    cin >> k;

    forn(j, k) {
      cin >> s;
      if (!u && v > s) {
        u = true;
        ans.push_back(i);
      }
    }
  }

  cout << ans.size() << endl;
  forn(i, ans.size()) cout << ans[i] + 1 << " ";
}

int32_t main() {
  lage_rho();
  // test
  solve();
  return 0;
}