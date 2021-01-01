
// Problem: Vaccine Production
// Contest: CodeChef - December Challenge 2020 Division 2
// URL: https://www.codechef.com/DEC20B/problems/VACCINE1
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

void lage_rho() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

void solve() {
  int d1, v1, d2, v2, p;
  cin >> d1 >> v1 >> d2 >> v2 >> p;

  int days = 1, vaccine = 0;
  while (vaccine < p) {
    if (d1 <= days) {
      vaccine += v1;
    }
    if (d2 <= days) {
      vaccine += v2;
    }
    days++;
  }
  days--;
  cout << days << endl;
}

int32_t main() {
  lage_rho();
  solve();
  return 0;
}