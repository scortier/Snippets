// Problem: C - ORXOR
// Contest: AtCoder - AtCoder Beginner Contest 197（Sponsored by Panasonic）
// URL: https://atcoder.jp/contests/abc197/tasks/abc197_c
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
  int n;
  cin >> n;
  int a[n];
  fl(i, 0, n) cin >> a[i];
  sort(a, a + n);
  int x = 0;
  fl(i, 0, n - 1) { x |= a[i]; }
  x = x ^ a[n - 1];
  pr(x);
}

void al() {
  int n;
  cin >> n;
  int a[n];
  bool eve = false, odd = false;
  vector<int> b, c;
  fl(i, 0, n) cin >> a[i];
  fl(i, 0, n) {
    if (a[i] % 2 == 0) {
      b.pb(a[i]);
      eve = true;
    } else {
      c.pb(a[i]);
      odd = true;
    }
  }
  if (eve and odd) {
    int z = 0, v = 0;
    for (auto x : b) {
      z |= x;
    }
    for (auto y : c) v |= y;
    // cout << z << v << endl;
    z = z ^ v;
    pr(z);
    return;
  } else {
    sort(a, a + n);
    int x = 0;
    fl(i, 0, n - 1) { x |= a[i]; }
    x = x ^ a[n - 1];
    pr(x);
    return;
  }
}
void solv() {
  int n;
  cin >> n;
  int a[n];
  int x = 0, b = 0;
  fl(i, 0, n) cin >> a[i];
  sort(a, a + n);
  fl(i, 0, n) {
    if (a[i] % 2) {
      b = a[i];
      break;
    }
  }
  fl(i, 0, n) {
    if (a[i] == b)
      continue;
    else
      x |= a[i];
  }
  x = x ^ b;
  pr(x);
}
void shi() {
  int n;
  cin >> n;
  int a[n];
  int x = 0, res = INT_MAX;
  fl(i, 0, n) cin >> a[i];
  for (int i = 0; i < 1 << (n - 1); i++) {
    int xored = 0;
    int ored = 0;
    for (int j = 0; j <= n; j++) {
      if (j < n) ored |= a[j];
      if (j == n or (i >> j & 1)) xored ^= ored, ored = 0;
    }
    res = min(res, xored);
  }
  pr(res);
}
int32_t main() {
  lage_rho();
  shi();
  return 0;
}