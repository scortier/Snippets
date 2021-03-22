// Problem: A. Be Positive
// Contest: Codeforces - Codeforces Round #542 [Alex Lopashev Thanks-Round]
// (Div. 2) URL: https://codeforces.com/contest/1130/problem/A Memory Limit: 256
// MB Time Limit: 1000 ms

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
  int a[n];
  int p = 0, ne = 0;
  fl(i, 0, n) {
    cin >> a[i];
    if (a[i] > 0)
      p++;
    else if (a[i] < 0)
      ne++;
  }
  if (p >= ceil(1.0 * n / 2))
    pr(1);
  else if (ne >= ceil(1.0 * n / 2))
    pr(-1);
  else
    pr(0);
}

int32_t main() {
  lage_rho();
  // test
  solve();
  return 0;
}