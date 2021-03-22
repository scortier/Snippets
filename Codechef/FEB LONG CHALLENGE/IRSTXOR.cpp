// Problem: Interesting XOR!
// Contest: CodeChef - March Challenge 2021 Division 2
// URL: https://www.codechef.com/MARCH21B/problems/IRSTXOR
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
#define int ll
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
  int c;
  cin >> c;
  int i = 1, x = 0;
  while (x <= c) {
    x = pow(2, i);
    i++;
  }
  i -= 2;
  int bits = floor(log2(c)) + 1;
  int tmp = ((1 << bits) - 1) ^ c;
  tmp += pow(2, i);
  int tmp2 = pow(2, i) - 1;
  pr(tmp * tmp2);
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}