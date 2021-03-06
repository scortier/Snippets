
// Problem: Scoreboard queries
// Contest: HackerEarth - January Circuits '21
// URL:
// https://www.hackerearth.com/challenges/competitive/january-circuits-21/algorithm/tournament-and-ranks-67cd4b7e/
// Memory Limit: 256 MB
// Time Limit: 2500 ms
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
  ll n, q;
  cin >> n >> q;
  vector<ll> v(n);
  map<ll, ll> m;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    m[v[i]]++;
  }
  ll coun = 0;
  for (auto j : m) {
    coun += (j.second - 1);
  }
  while (q--) {
    ll l, r;
    cin >> l >> r;
    coun -= (m[v[l - 1]] - 1);
    m[v[l - 1]]--;
    if (m[v[l - 1]] > 0) coun += (m[v[l - 1]] - 1);
    v[l - 1] = r;
    if (m[r] == 0)
      m[r]++;
    else {
      m[r]++;
      coun++;
    }
    cout << n + 1 - coun << endl;
  }
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}