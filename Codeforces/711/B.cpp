// Problem: B. Box Fitting
// Contest: Codeforces - CodeCraft-21 and Codeforces Round #711 (Div. 2)
// URL: https://codeforces.com/contest/1498/problem/B
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
  int n, w;
  cin >> n >> w;
  int z = w;
  vector<int> a(n);
  fl(i, 0, n) { cin >> a[i]; }
  int cnt = 0, sum = 0;
  sort(a.begin(), a.end());
  fl(i, 0, n) {
    if (w >= a[i]) {
      w -= a[i];
      cnt = 1;
    }

    else {
      sum += a[i];
    }
  }
  // pr(sum);

  if (sum > z) {
    while (sum > z) {
      sum -= z;
      cnt++;
      // cout << cnt << " ";
    }
  } else
    cnt++;
  pr(cnt);
}
void sol() {
  int n, w;
  cin >> n >> w;

  vector<int> a(n);
  int sum = 0;
  fl(i, 0, n) {
    cin >> a[i];
    sum += a[i];
  }
  int cnt = 0;
  while (sum > w) {
    sum -= w;
    cnt++;
  }
  pr(cnt + 1);
}
int32_t main() {
  lage_rho();
  test sol();
  return 0;
}