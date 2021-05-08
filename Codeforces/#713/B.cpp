// Problem: B. Almost Rectangle
// Contest: Codeforces - Codeforces Round #713 (Div. 3)
// URL: https://codeforces.com/contest/1512/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

/*
Meri Zameen tumse Gehri hai,
Dekhna Asmaan tumse Ucha hoga.
*/
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
#define ff first
#define ss second
#define MOD 1000000007
#define PI acos(-1.0)
#define assign(x, val) memset(x, val, sizeof(x))
#define prec(val, dig) fixed << setprecision(dig) << val
#define pi pair<int, int>
#define pr(gg) cout << gg << endl
#define mk(arr, n, type) type *arr = new type[n];
void scortier() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

// void solve() {
// int n;
// cin >> n;
// char a[n + 1][n + 1];
// fl(i, 1, n + 1) {
// fl(j, 1, n + 1) { cin >> a[i][j]; }
// }
// int x1, x2, y1, y2;
// vector<pair<int, int>> v;
// fl(i, 1, n + 1) {
// fl(j, 1, n + 1) {
// if (a[i][j] == '*') {
// v.pb(mp(i, j));
// }
// }
// }
// x1 = v[0].ff;
// x2 = v[1].ff;
// y1 = v[0].ss;
// y2 = v[1].ss;
// int p = min(x1, x2);
// int q = max(x1, x2);
// int r = min(y1, y2);
// int s = max(y1, y2);
// set<int> st;
// vector<int> b = {0};
// st.insert(p);
// st.insert(q);
// st.insert(r);
// st.insert(s);
// for (auto ele : st) {
// b.pb(ele);
// }
// // cout << b[1] << b[2] << endl;
// // fl(i, 1, n + 1) {
// // fl(j, 1, n + 1) {
// // if (i == b[2] and j == b[2]) {
// // a[i][j] = '*';
// // } else if (i == b[1] and j == b[1])
// // a[i][j] = '*';
// // else if (i == b[1] and j == b[2])
// // a[i][j] = '*';
// // else if (i == b[2] and j == b[1])
// // a[i][j] = '*';
// // }
// // }
//
// fl(i, 1, n + 1) {
// fl(j, 1, n + 1) {
// if (a[i][j] == '*') {
// v.pb(mp(i, j));
// }
// }
// }
//
// fl(i, 1, n + 1) {
// fl(j, 1, n + 1) {
// if (x1 == x2) {
// x1++;
// x2++;
// a[x1][y1] = '*';
// a[x2][y2] = '*';
// } else if (y1 == y2) {
// y1++;
// y2++;
// a[x1][y1] = '*';
// a[x2][y2] = '*';
// } else {
// if (i == p and (j == r or j == s))
// a[i][j] = '*';
// else if (i == q and (j == r or j == s))
// a[i][j] = '*';
// }
// }
// }
//
// fl(i, 1, n + 1) {
// fl(j, 1, n + 1) { cout << a[i][j]; }
// cout << endl;
// }
// // cout << endl;
// }

void solve() {
  int n, k;
  cin >> n;
  vector<vector<char>> v(n, vector<char>(n));
  vector<vector<int>> a;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v[i][j];
      if (v[i][j] == '*') a.push_back({i, j});
    }
  }
  int d = abs(a[0][1] - a[1][1]);
  if (a[0][0] == a[1][0]) {
    if (a[0][0] < n - 1) {
      v[a[0][0] + 1][a[0][1]] = '*';
      v[a[1][0] + 1][a[1][1]] = '*';
    } else {
      v[a[0][0] - 1][a[0][1]] = '*';
      v[a[1][0] - 1][a[1][1]] = '*';
    }
  } else if (d == 0) {
    if (a[0][1] < n - 1) {
      v[a[0][0]][a[0][1] + 1] = '*';
      v[a[1][0]][a[1][1] + 1] = '*';
    } else {
      v[a[0][0]][a[0][1] - 1] = '*';
      v[a[1][0]][a[1][1] - 1] = '*';
    }
  } else if (a[0][1] <= a[1][1]) {
    v[a[0][0]][a[0][1] + d] = '*';
    v[a[1][0]][a[1][1] - d] = '*';
  } else {
    v[a[0][0]][a[0][1] - d] = '*';
    v[a[1][0]][a[1][1] + d] = '*';
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << v[i][j];
    }
    cout << endl;
  }
}
int32_t main() {
  scortier();
  test solve();
  return 0;
}