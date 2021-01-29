
// Problem: A. Odd Divisor
// Contest: Codeforces - Codeforces Round #697 (Div. 3)
// URL: https://codeforces.com/contest/1475/problem/0
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
bool check(ll n) {
  if (n == 0) return false;

  return (ceil(log2(n)) == floor(log2(n)));
}
void solve() {
  ll n;
  cin >> n;
  if (n == 2)
    cout << "NO" << endl;
  else if (!check(n)) {
    cout << "YES" << endl;
  } else
    cout << "NO" << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}