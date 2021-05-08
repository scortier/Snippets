// Problem: Worthy Matrix
// Contest: CodeChef - April Challenge 2021 Division 2
// URL: https://www.codechef.com/APRIL21B/problems/KAVGMAT
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
#define int long long int
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
void scortier() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  int ans = 0;
  double a[n + 1][m + 1];

  fl(i, 0, n + 1) {
    fl(j, 0, m + 1) {
      if (i == 0 or j == 0)
        a[i][j] = 0;
      else
        cin >> a[i][j];
    }
  }
  for (int i = 0; i <= n; i++) {
    double sum = 0;
    for (int j = 0; j <= m; j++) {
      a[i][j] += sum;
      sum = a[i][j];
    }
  }

  fl(i, 0, m + 1) {
    double sum = 0;
    fl(j, 0, n + 1) {
      a[j][i] += sum;
      sum = a[j][i];
    }
  }

  int mnn = min(m, n);

  for (int w = 1; w <= mnn; w++) {
    for (int i = w; i <= n; i++) {
      for (int j = w; j <= m; j++) {
        if ((a[i][j] + a[i - w][j - w] - a[i][j - w] - a[i - w][j]) / (w * w) >=
            k)
          ans++;
      }
    }
  }
  pr(ans);
}

int32_t main() {
  scortier();
  test solve();
  return 0;
}