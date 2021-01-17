
// Problem: The GCD function
// Contest: HackerEarth - January Circuits '21
// URL:
// https://www.hackerearth.com/challenges/competitive/january-circuits-21/algorithm/gcd-function-9fe49c14/
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
int gcd(int a, int b) {
  if (a == 0) return b;
  if (b == 0) return a;
  if (a == b) return a;
  if (a > b)
    return gcd(a - b, b);
  else
    return gcd(a, b - a);
}
void solve() {
  ll n;
  cin >> n;
  int mx = 0, mn = MOD, sum = 0;
  for (int x = 1; x <= 40; x++) {
    for (int i = 1; i <= n; i++) {
      sum += __gcd(x, i);
      if (sum > mx) {
        mx = sum;
        mn = x;
      }
      sum = 0;
    }
  }
  cout << mx << " " << mn << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}