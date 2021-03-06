
// Problem: B. Red and Blue
// Contest: Codeforces - Educational Codeforces Round 101 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1469/problem/B
// Memory Limit: 512 MB
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
#define N 112345
int a[N], b[N];

void solve() {
  int n, ma = 0;
  cin >> n;
  fl(i, 0, n) {
    cin >> a[i];
    if (i > 0) a[i] += a[i - 1];
    ma = max(ma, a[i]);
  }
  int m, mb = 0;
  cin >> m;
  fl(i, 0, m) {
    cin >> b[i];
    if (i > 0) b[i] += b[i - 1];
    mb = max(mb, b[i]);
  }
  cout << ma + mb << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}