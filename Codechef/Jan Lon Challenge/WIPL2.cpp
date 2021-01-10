
// Problem: Watching CPL
// Contest: CodeChef - January Challenge 2021 Division 3
// URL: https://www.codechef.com/JAN21C/problems/WIPL
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// Handle Name: Scortier (Aditya Singh Sisodiya)
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
} /**********=============########################============***********/

void solve() {
  ll n, k;
  cin >> n >> k;
  ll sum = 0, ans = 0;
  ll a[n];
  fl(i, 0, n) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a, a + n, greater<>());

  if (n == 1 or sum < 2 * k) {
    pr(-1);
    return;
  }
  // sum==2*k then sum must be even
  else if (sum == 2 * k) {
    // if (sum % 2 == 1 or a[0] > k) {
    pr(n);
    return;
  }
  // exact possible case
  // else if (a[0] == k) {
  //   else {
  // pr(n);
  // }
  int sa = 0, sb = 0;
  else if (sum > 2 * k) {
    int t = 0, i, j;
    while (i < n) {
      sa += a[i];

      if (sa >= k) break;

      for (j = i + 1; j < n; j++)
        if (a[j] >= (k - sa)) t = 1;

      if (t == 1) sa += a[j];
      swap(a[j], a[i + 1]);

      int i = 2;
      while (i < n) {
        sb += a[i];
        int m = 0;
        if (sb >= k) break;
        for (j = i + 1; i < n; i++)
          if (a[j] >= (k - sb)) m = 1;
        if (m == 1) {
          sb += a[j];
          swap(a[j], a[j + 1]);
        }
        if (m != 1) {
          for (j = i + 1; i < n; j++) {
            if (a[m] < (k - sb)) break;
          }
          swap(a[m], a[i + 1]);
        }
      }
    }
  }

  int32_t main() {
    lage_rho();
    test solve();
    return 0;
  }
