// Problem: Consecutive Adding
// Contest: CodeChef - March Challenge 2021 Division 2
// URL: https://www.codechef.com/MARCH21B/problems/CONSADD
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
// #define int ll
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
#define lim 1006
/**********=============########################============***********/
ll a[lim][lim], b[lim][lim];
bool isSafe(ll a[lim][lim], ll b[lim][lim], int r, int c) {
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++) {
      if (a[i][j] != b[i][j]) return false;
    }
  return true;
}

void solve() {
  int r, c, x, k;
  cin >> r >> c >> x;

  ll diff = 0;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) cin >> a[i][j];
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) cin >> b[i][j];
  }
  if (r < x && c < x) {
    if (isSafe(a, b, r, c))
      pr("Yes");
    else
      pr("No");
  } else if (r < x) {
    for (int i = 0; i < r; i++) {
      for (int j = 0; j <= (c - x); j++) {
        if (a[i][j] == b[i][j])
          continue;
        else {
          diff = b[i][j] - a[i][j];
          a[i][j] += diff;
          k = 1;
          while (k < x) {
            a[i][j + k] += diff;
            k++;
          }
        }
      }
    }
    if (isSafe(a, b, r, c))
      pr("Yes");
    else
      pr("No");
  } else if (c < x) {
    for (int i = 0; i < c; i++) {
      for (int j = 0; j <= (r - x); j++) {
        if (a[j][i] == b[j][i])
          continue;
        else {
          diff = b[j][i] - a[j][i];
          a[j][i] += diff;
          k = 1;
          while (k < x) {
            a[j + k][i] += diff;
            k++;
          }
        }
      }
    }
    if (isSafe(a, b, r, c))
      pr("Yes");
    else
      pr("No");
  } else if (r >= x && c >= x) {
    for (int i = 0; i < r; i++) {
      for (int j = 0; j <= (c - x); j++) {
        if (a[i][j] == b[i][j])
          continue;
        else {
          diff = b[i][j] - a[i][j];
          a[i][j] += diff;
          k = 1;
          while (k < x) {
            a[i][j + k] += diff;
            k++;
          }
        }
      }
    }
    for (int i = 0; i < c; i++) {
      for (int j = 0; j <= (r - x); j++) {
        if (a[j][i] == b[j][i])
          continue;
        else {
          diff = b[j][i] - a[j][i];
          a[j][i] += diff;
          int k = 1;
          while (k < x) {
            a[j + k][i] += diff;
            k += 1;
          }
        }
      }
    }
    if (isSafe(a, b, r, c))
      pr("Yes");
    else
      pr("No");
  }
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}