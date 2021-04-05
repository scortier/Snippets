// Problem: A. Alexey and Train
// Contest: Codeforces - Codeforces Round #707 (Div. 2, based on Moscow Open
// Olympiad in Informatics) URL: https://codeforces.com/contest/1501/problem/A
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
  int a[n + 1] = {}, b[n + 1] = {}, tm[n + 1] = {};
  for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
  for (int i = 1; i <= n; i++) cin >> tm[i];
  int ans = 0;
  int d[n + 1];
  d[0] = 0;
  for (int i = 1; i <= n; i++) {
    int x = d[i - 1] + a[i] - b[i - 1] + tm[i];
    d[i] = max(x + (b[i] - a[i] + 1) / 2, b[i]);
    if (i == n) {
      pr(x);
      return;
    }
  }
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}