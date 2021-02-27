// Problem: C. Beautiful Numbers
// Contest: Codeforces - Codeforces Round #181 (Div. 2)
// URL: http://codeforces.com/problemset/problem/300/C
// Memory Limit: 256 MB
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

const ll MOD = 1e9 + 7;
const int MAX = 2e6 + 10;
ll fact[MAX];
void calculate() {
  fact[0] = 1;
  for (int i = 1; i < MAX; i++) {
    fact[i] = (fact[i - 1] * i) % MOD;
  }
}
ll modExp(ll b, ll p) {
  ll res = 1;
  while (p > 0) {
    if (p & 1) res = (res * b) % MOD;
    b = (b * b) % MOD, p >>= 1;
  }
  return res;
}
ll modInverse(ll n) { return modExp(n, MOD - 2); }
ll nCr(ll n, ll r) {
  return (fact[n] * modInverse(fact[n - r]) % MOD * modInverse(fact[r]) % MOD) %
         MOD;
}
void add(ll &a, ll b) {
  b %= MOD;
  a = (a + b) % MOD;
}
void mul(ll &a, ll b) {
  b %= MOD;
  a = (a * b) % MOD;
}
void sub(ll &a, ll b) {
  b %= MOD;
  a = (a - b) % MOD;
  a = (a + MOD) % MOD;
}

bool good(int a, int b, int x) {
  while (x) {
    int d = x % 10;
    x /= 10;
    if (d != a && d != b) return false;
  }
  return true;
}
void solve() {
  calculate();
  int a, b, n;
  cin >> a >> b >> n;
  ll ans = 0;
  for (int i = 0; i <= n; i++) {
    int sum = i * a + (n - i) * b;
    if (good(a, b, sum)) add(ans, nCr(n, i));
  }
  cout << ans;
}

int32_t main() {
  lage_rho();
  // test
  solve();
  return 0;
}