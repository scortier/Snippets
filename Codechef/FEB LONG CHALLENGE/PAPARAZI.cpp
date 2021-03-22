// Problem: Paparazzi Gennady
// Contest: CodeChef - March Challenge 2021 Division 2
// URL: https://www.codechef.com/MARCH21B/problems/PAPARAZI
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

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> p, st;
  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    p.push_back({i + 1, v});
  }
  if (n == 2) {
    cout << "1\n";
    // continue;
    return;
  }
  st.pb(p[0]);
  st.pb(p[1]);
  int ans = 1, sz = st.size();
  for (int i = 2; i < n; i++)
  {
    while (st.size() >= 2)
    {
      double s1 = ((double)st[sz - 1].second - (double)st[sz - 2].second) /
                  ((double)st[sz - 1].first - (double)st[sz - 2].first);

      double s2 = ((double)p[i].second - (double)st[sz - 1].second) /
                  ((double)p[i].first - (double)st[sz - 1].first);

      if (s1 <= s2) {
        st.pop_back();
        sz--;
      } else
        break;
    }
    st.pb(p[i]);
    sz++;
    ans = max(ans, st[sz - 1].first - st[sz - 2].first);
  }
  cout << ans << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}