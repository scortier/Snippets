// Problem: B. Restore Modulo
// Contest: Codeforces - Codeforces Round #709 (Div. 2, based on Technocup 2021
// Final Round) URL: https://codeforces.com/contest/1484/problem/B Memory Limit:
// 256 MB Time Limit: 1000 ms

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
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    -cin >> a[i];
  }
  if (n <= 2) {
    cout << 0 << endl;
    return;
  }
  int cnt = 0;
  fl(i, 0, n - 1) {
    if (a[i] == a[i + 1]) cnt++;
  }
  if (cnt) {
    if (cnt == n - 1) {
      cout << 0 << endl;
      return;
    }
    cout << -1 << endl;
    return;
  }
  int c = -1;
  cnt = 0;
  fl(i, 0, n - 1) {
    if (a[i] < a[i + 1] and c == -1) {
      c = a[i + 1] - a[i];
    } else if (a[i] < a[i + 1] and c != a[i + 1] - a[i]) {
      cout << -1 << endl;
      return;
    }
    if (a[i] < a[i + 1]) cnt++;
  }
  if (cnt == n - 1) {
    cout << 0 << endl;
    return;
  }
  int m = -1;
  if (c != -1) {
    fl(i, 0, n - 1) {
      if (a[i] > a[i + 1] and m == -1) {
        m = a[i] + c - a[i + 1];
      } else if (a[i] > a[i + 1] and m != a[i] + c - a[i + 1]) {
        cout << -1 << endl;
        return;
      }
    }
    if (m != -1) {
      fl(i, 0, n) {
        if (a[i] >= m) {
          cout << -1 << endl;
          return;
        }
      }
      cout << m << " " << c << endl;
      return;
    }
    cout << 0 << endl;
    return;
  }
  int dif = a[0] - a[1];
  fl(i, 0, n - 1) {
    if (dif != a[i] - a[i + 1]) {
      cout << -1 << endl;
      return;
    }
  }
  cout << 0 << endl;
  return;
}
int32_t main() {
  lage_rho();
  test solve();
  return 0;
}