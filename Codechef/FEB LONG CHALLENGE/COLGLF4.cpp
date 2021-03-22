// Problem: College Life 4
// Contest: CodeChef - March Challenge 2021 Division 2
// URL: https://www.codechef.com/MARCH21B/problems/COLGLF4
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
// #define e endl
void lage_rho() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/
#define mmm 100000000009999999
void solve() {
  ll t;
  cin >> t;
  for (ll j = 0; j < t; j++) {
    ll n, ne, nc, pml, chhml, chac, i;
    cin >> n >> ne >> nc >> pml >> chhml >> chac;

    ll chmax = min(ne, nc), comin = mmm;

    for (i = 0; i <= chmax; i++) {
      ll re, rch;
      ll fcuk = 0;
      if (i == n)
        fcuk += (i * chac);
      else if (i < n) {
        fcuk += (i * chac);
        rch = nc - i;
        re = ne - i;
        if (pml <= chhml) {
          ll nO = re / 2, nCM = rch / 3;
          if (nO >= (n - i))
            fcuk += (n - i) * pml;
          else {
            fcuk += (nO)*pml;
            if (nCM + nO + i < n)
              fcuk = mmm;
            else
              fcuk += (n - i - nO) * chhml;
          }
        } else {
          ll nO = re / 2, nCM = rch / 3;
          if (nCM >= (n - i))
            fcuk += (n - i) * chhml;
          else {
            fcuk += (nCM)*chhml;
            if (nCM + nO + i < n)
              fcuk = 100000000009999999;
            else
              fcuk += (n - i - nCM) * pml;
          }
        }
      } else
        break;
      if (fcuk < comin) comin = fcuk;
    }
    if (comin != 100000000009999999)
      cout << comin << "\n";
    else
      cout << "-1\n";
  }
}

int32_t main() {
  lage_rho();
  solve();
  return 0;
}