// Problem: A - I Scream
// Contest: AtCoder - AtCoder Beginner Contest 194
// URL: https://atcoder.jp/contests/abc194/tasks/abc194_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

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
  int a, b;
  cin >> a >> b;
  if (a + b >= 15 and b >= 8)
    pr(1);
  else if (a + b >= 10 and b >= 3)
    pr(2);
  else if (a + b >= 3)
    pr(3);
  else
    pr(4);
}

int32_t main() {
  lage_rho();
  // test
  solve();
  return 0;
}