
// Problem: B. Different Divisors
// Contest: Codeforces - Codeforces Round #696 (Div. 2)
// URL: https://codeforces.com/contest/1474/problem/B
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

// int countDivisors(int n, int d) {
// int cnt = 0;
// int x = 0, y = 0;
// for (int i = 1; i <= sqrt(n); i++) {
// if (n % i == 0) {
// y = i;
// if ((y - x) >= d) {
// // If divisors are equal,
// // count only one
// if (n / i == i)
// cnt++;
//
// else  // Otherwise count both
// cnt = cnt + 2;
// // cnt++;
// x = y;
// }
// }
// }
// return cnt;
// }
// void solve() {
// ll d;
// cin >> d;
// int a, c;
// for (a = 4; a < 100; a++) {
// if (countDivisors(a, d) >= 4) {
// c = a;
// break;
// }
// }
// pr(c);
// }
const int m = 1000000;
bool prime[1000000];
void SieveOfEratosthenes() {
  memset(prime, true, sizeof(prime));

  for (int p = 2; p * p <= m; p++) {
    if (prime[p] == true) {
      for (int i = p * p; i <= m; i += p) prime[i] = false;
    }
  }
}
void solve() {
  int n;
  cin >> n;
  int a = 1 + n;
  while (!prime[a]) a++;
  int b = a + n;
  while (!prime[b]) b++;

  cout << a * b << endl;
}
int32_t main() {
  lage_rho();
  SieveOfEratosthenes();
  test solve();
  return 0;
}