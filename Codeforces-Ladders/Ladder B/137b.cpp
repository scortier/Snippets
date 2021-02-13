// Problem: B. Permutation
// Contest: Codeforces - Codeforces Beta Round #98 (Div. 2)
// URL: https://codeforces.com/contest/137/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

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
  int cnt = 0;
  cin >> n;
  int a[n + 1];
  map<int, int> mp;
  // int b[n + 1];
  for (int i = 1; i <= n; i++) mp[i] = -1;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    mp[a[i]]++;
    // b[i] = i;
  }
  // sort(a + 1, a + n + 1);
  for (int i = 1; i <= n; i++) {
    // if (b[i] != a[i]) cnt++;

    if (mp[i] == -1) cnt++;
  }
  pr(cnt);
}

int32_t main() {
  lage_rho();
  solve();
  return 0;
}