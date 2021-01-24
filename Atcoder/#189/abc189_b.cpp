
// Problem: B - Alcoholic
// Contest: AtCoder - AtCoder Beginner Contest 189
// URL: https://atcoder.jp/contests/abc189/tasks/abc189_b
// Memory Limit: 1024 MB
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
  int n, x;
  cin >> n >> x;
  vector<int> v(n), p(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i] >> p[i];
    v[i] = v[i] * p[i];
  }
  int flag = 0, s = 0, cnt = 0;
  fl(i, 0, n) {
    s += v[i];
    cnt++;
    if (s > x * 100) {
      flag = 1;
      break;
    }
  }
  if (flag)
    pr(cnt);
  else
    pr(-1);
}

int32_t main() {
  lage_rho();
  solve();
  return 0;
}