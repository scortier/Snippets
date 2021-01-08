
// Problem: Point Of Impact
// Contest: CodeChef - January Challenge 2021 Division 3
// URL: https://www.codechef.com/JAN21C/problems/BILLRD
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
void lage_rho() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

void solve() {
  long n, k, x, y;
  cin >> n >> k >> x >> y;
  vector<pair<long, long>> v(4);
  if (x == y)
    cout << n << " " << n << endl;
  else {
    if (x > y) {
      v[0] = make_pair(n, y + n - x);
      v[1] = make_pair(y + n - x, n);
      v[2] = make_pair(0, x - y);
      v[3] = make_pair(x - y, 0);
    } else {
      v[0] = make_pair(x + n - y, n);
      v[1] = make_pair(n, x + n - y);
      v[2] = make_pair(y - x, 0);
      v[3] = make_pair(0, y - x);
    }
    cout << v[(k - 1) % 4].first << " " << v[(k - 1) % 4].second << endl;
  }
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}