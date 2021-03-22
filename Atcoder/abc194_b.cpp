// Problem: B - Job Assignment
// Contest: AtCoder - AtCoder Beginner Contest 194
// URL: https://atcoder.jp/contests/abc194/tasks/abc194_b
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
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) {
  return (a.second < b.second);
}

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> a(n);

  fl(i, 0, n) {
    int x, y;
    cin >> x >> y;
    a[i].first = x;
    a[i].second = y;
  }
  sort(a.begin(), a.end());
  int p = a[0].first;
  int q = a[0].second;
  // pr(p);
  int cnt = 0;
  fl(i, 0, n - 1) {
    if (a[0].first + a[0].second < a[i + 1].second) {
      cnt++;
    }
    if (cnt == n - 1) {
      int w = a[0].first + a[0].second;
      pr(w);
      return;
    }
  }
  // pr(p);
  fl(i, 0, n) {
    if (cnt != n - 1) {
      sort(a.begin(), a.end(), sortbysec);
      if (a[0].second == q)
        q = a[1].second;
      else
        q = a[0].second;
      int y = max(p, q);
      // pr(p);
      // pr(q);
      pr(y);
      return;
    }
  }
}

int32_t main() {
  lage_rho();
  // test
  solve();
  return 0;
}