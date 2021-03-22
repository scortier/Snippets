// Problem: Dense Graph
// Contest: CodeChef - March Challenge 2021 Division 2
// URL: https://www.codechef.com/MARCH21B/problems/DENSEGRP
// Memory Limit: 256 MB
// Time Limit: 4000 ms

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
vector<ll> people2;
vector<ll> people1;
bool isinrange(ll a, ll b) {
  for (ll i = 0; i < people1.size(); i++) {
    if (people1[i] <= b && people2[i] >= a) {
      return true;
    }
  }
  return false;
}

void solve() {
  ll n, m, x, y, a[m], b[m], c[m], d[m];
  cin >> n >> m >> x >> y;
  for (ll i = 0; i < m; i++) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }
  if (x == y) {
    pr("0");
    // continue;
  }
  ll dig[m];
  ll ans = -1;
  ll z = 0;
  vector<ll> q1;
  vector<ll> q2;

  for (ll i = 0; i < m; i++) {
    dig[i] = 0;
  }
  q1.push_back(x);
  q2.push_back(x);

  while ((ans == -1) && (q1.size() != 0)) {
    people1.clear();

    people2.clear();
    people1 = q1;
    people2 = q2;
    vector<ll> w1;
    vector<ll> w2;
    for (ll i = 0; i < (m); i++) {
      if ((dig[i] == 0) && isinrange(a[i], b[i])) {
        w1.push_back(c[i]);
        w2.push_back(d[i]);
        if (c[i] <= y && d[i] >= y) {
          ans = z + 1;
        }
        dig[1] = 1;
      }
    }
    q1 = w1;
    q2 = w2;
    z++;
  }
  cout << ans << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}