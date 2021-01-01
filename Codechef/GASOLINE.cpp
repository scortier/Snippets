
// Problem: Gasoline
// Contest: CodeChef - November Lunchtime 2020 Division 2
// URL: https://www.codechef.com/LTIME90B/problems/GASOLINE
// Memory Limit: 256 MB
// Time Limit: 4000 ms
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
#define mp make_pair
#define f first
#define ss second
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
  int n;
  cin >> n;
  vector<int> f(n), c(n);
  for (int i = 0; i < n; i++) {
    cin >> f[i];
  }
  vector<pair<int, int> > e;
  for (int i = 0; i < n; i++) {
    cin >> c[i];
    e.push_back({c[i], f[i]});
  }
  sort(e.begin(), e.end());
  int sum = 0;
  ll ans = 0;
  for (auto c : e) {
    if (sum + c.second <= n) {
      sum += c.second;
      ans += c.first * (ll)c.second;
    } else {
      ans += (n - sum) * (ll)c.first;
      break;
    }
  }
  cout << ans << '\n';
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}