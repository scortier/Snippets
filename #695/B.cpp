
// Problem: B. Hills And Valleys
// Contest: Codeforces - Codeforces Round #695 (Div. 2)
// URL: https://codeforces.com/contest/1467/problem/B
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

void solve() {
  int n;
  cin >> n;
  int a[n + 1];
  int b[n + 1];
  fl(i, 1, n + 1) cin >> a[i], b[i] = a[i];

  int hill = 0, h = 0, v = 0, valley = 0;
  fl(j, 2, n) if (a[j] > a[j + 1] and a[j] > a[j - 1]) {
    if (a[j - 1] > a[j + 1])
      a[j] = a[j - 1];
    else
      a[j] = a[j + 1];
    break;
  }
  // fl(i, 1, n + 1) cout << a[i] << " ";
  // cout << endl;
  fl(j, 2, n) {
    if (a[j] > a[j + 1] and a[j] > a[j - 1])
      h++;
    else if (a[j + 1] > a[j] and a[j - 1] > a[j])
      v++;
  }
  fl(i, 1, n + 1) a[i] = b[i];
  fl(j, 2, n) if (a[j + 1] > a[j] and a[j - 1] > a[j]) {
    if (a[j - 1] > a[j + 1])
      a[j] = a[j - 1];
    else
      a[j] = a[j + 1];
    break;
  }
  // fl(i, 1, n + 1) cout << a[i] << " ";
  // cout << endl;
  fl(j, 2, n) {
    if (a[j] > a[j + 1] and a[j] > a[j - 1])
      hill++;
    else if (a[j + 1] > a[j] and a[j - 1] > a[j])
      valley++;
  }
  int z = h + v;
  int x = hill + valley;
  pr(min(z, x));
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}