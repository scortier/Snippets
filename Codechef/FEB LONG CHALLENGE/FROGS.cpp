
// Problem: Frog Sort
// Contest: CodeChef - February Challenge 2021 Division 2
// URL: https://arr1arr1arr1.codechef.com/FEB21B/problems/FROGS
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
  int n;
  cin >> n;
  int arr1[n], arr2[n];
  fl(i, 0, n) cin >> arr1[i];
  fl(i, 0, n) cin >> arr2[i];
  if (n == 2) {
    if (arr1[0] == 1 and arr1[1] == 2)
      pr("0");
    else {
      if (arr2[0] == 1)
        pr("2");
      else
        pr("1");
    }
  } else if (n == 3) {
    int a, b, c, p, q, r;
    int cnt = 0;
    fl(i, 0, n) {
      if (arr1[i] == 1) {
        a = i;
        p = i;
      } else if (arr1[i] == 2) {
        b = i;
        q = i;

      } else if (arr1[i] == 3) {
        c = i;
        r = i;
      }
    }
    while (c <= b or b <= a or c <= a) {
      while (b <= a) b += arr2[q], cnt++;
      while (c <= b or c <= a) c += arr2[r], cnt++;
    }
    pr(cnt);
  } else if (n == 4) {
    int a, b, c, d, p, q, r, dp;
    int cnt = 0;
    fl(i, 0, n) {
      if (arr1[i] == 1) {
        a = i;
        p = i;
      } else if (arr1[i] == 2) {
        b = i;
        q = i;

      } else if (arr1[i] == 3) {
        c = i;
        r = i;
      } else if (arr1[i] == 4) {
        d = i;
        dp = i;
      }
    }
    while (d <= a or d <= b or d <= c or c <= b or b <= a or c <= a) {
      while (b <= a) b += arr2[q], cnt++;
      while (c <= b or c <= a) c += arr2[r], cnt++;
      while (d <= a or d <= b or d <= c) d += arr2[dp], cnt++;
    }
    pr(cnt);
  }
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}