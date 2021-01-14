
// Proendlem: Chef and Ants
// Contest: CodeChef - January Challenge 2021 Division 3
// URL: https://www.codechef.com/JAN21C/proendlems/ANTSCHEF
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

// Handle: Scortier (Aditya Singh Sisodiya)

#include <bits/stdc++.h>
using namespace std;
#define S(t) (ll) t.size()
#define all(v) v.begin(), v.end()
#define bl '\n'
#define ll long long
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mk make_pair
#define pll pair<ll, ll>
#define pldb pair<ldb, ldb>
#define fi first
#define se second
#define vull vector<ull>
#define vll vector<ll>
#define umll unordered_map<ll, ll>
// const ll mod = 1e9+7;

void solve(ll c) {
  ll n;
  cin >> n;
  vll ant[n];
  umll mp;
  for (ll i = 0; i <= n - 1; i++) {
    ll m;
    cin >> m;
    for (ll j = 0; j <= m - 1; j++) {
      ll x;
      cin >> x;
      mp[abs(x)]++;
      ant[i].pb(x);
    }
    sort(ant[i].begin(), ant[i].end());
  }
  ll ans = 0;
  ll ex = 0;
  for (auto x : mp) {
    if (x.second > 1) ex++;
  }
  for (ll i = 0; i <= n - 1; i++) {
    for (ll j = 0; j <= (ll)ant[i].size() - 1; j++) {
      ll curr = 0;
      if (mp[abs(ant[i][j])] > 1) {
        if (ant[i][j] > 0) {
          curr = (ll)ant[i].size() - (j + 1);
        } else {
          curr = j;
        }
      } else {
        if (ant[i][j] > 0) {
          curr = lb(all(ant[i]), -1 * ant[i][j]) - ant[i].begin();
        } else {
          curr = S(ant[i]) - (ub(all(ant[i]), -1 * ant[i][j]) - ant[i].begin());
        }
      }
      ans += curr;
      // cout<<curr<< ' ';
    }
    // nl;
  }
  cout << ans + ex << bl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  srand(time(0));
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  ll t = 1;
  cin >> t;
  for (ll i = 1; i <= t; i++) solve(i);

  return 0;
}