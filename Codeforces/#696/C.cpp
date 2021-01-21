// Bow to lgorl
// Problem: C. Array Destruction
// Contest: Codeforces - Codeforces Round #696 (Div. 2)
// URL: https://codeforces.com/contest/1474/problem/C
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
// 1e+2 = 100
// 1e-2 = 0.01
const int A = 1e6 + 12;
int cnt[A];
void reset(vector<int> a) {
  int r = a.size();
  for (int i = 0; i < r; i++) cnt[a[i]] = 0;
}
void solve() {
  int n;
  cin >> n;
  vector<int> a(2 * n);
  for (int i = 0; i < 2 * n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int t = 0;
  for (int i = 0; i < 2 * n - 1; i++) {
    for (int j = 0; j < 2 * n; j++) cnt[a[j]]++;
    int j = 2 * n - 1;
    int x = a[i] + a[j];
    vector<int> rm;
    for (int op = 0; op < n; op++) {
      while (j > 0 && cnt[a[j]] == 0) j--;
      rm.push_back(a[j]);
      rm.push_back(x - a[j]);
      cnt[a[j]]--, cnt[x - a[j]]--;
      if (cnt[a[j]] < 0 || cnt[x - a[j]] < 0) {
        cnt[a[j]] = 0;
        cnt[x - a[j]] = 0;
        break;
      }
      x = max(x - a[j], a[j]);
      if (op + 1 == n) t = 1;
    }
    reset(a);
    if (t) {
      cout << "YES\n";
      cout << rm[0] + rm[1] << "\n";
      for (int i = 0; i < rm.size(); i++) {
        cout << rm[i] << " \n"[i % 2];
      }
      return;
    }
  }
  cout << "NO\n";
  reset(a);
}
// void solve() {
// int n;
// cin >> n;
// vector<int> a(2 * n);
// fl(i, 0, 2 * n) cin >> a[i];
// sort(a.begin(), a.end());
// int t = 0;
// fl(i, 0, 2 * n - 1) {
// fl(j, 0, 2 * n) { cnt[a[j]]++; }
// int j = 2 * n - 1;
// int x = a[i] + a[j];
// vector<int> rem;
// fl(op, 0, n) {
// while (j > 0 and cnt[a[j]] == 0) j--;
// rem.pb(a[j]);
// rem.pb(x - a[j]);
// cnt[a[j]]--, cnt[x - a[j]]--;
// if (cnt[a[j]] < 0 or cnt[x - a[j]] < 0) {
// cnt[a[j]] = 0;
// cnt[x - a[j]] = 0;
// break;
// }
// x = max(x - a[j], a[j]);
// if (op + 1 == n) t = 1;
// }
// reset(a);
// if (t) {
// pr("YES");
// cout << rem[0] + rem[1] << endl;
// int p = rem.size();
// for (int i = 0; i < rem.size(); i++) {
// cout << rem[i] << "\n"[i % 2];
// }
// return;
// }
// }
// pr("NO");
// reset(a);
// }

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}