// Problem: B. Unique Bid Auction
// Contest: Codeforces - Codeforces Round #686 (Div. 3)
// URL: https://codeforces.com/contest/1454/problem/B
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
  int n;
  cin >> n;
  int a[n];
  fl(i, 0, n) cin >> a[i];
  // sort(a, a + n);
  map<int, int> mp;
  fl(i, 0, n) mp[a[i]]++;
  int x = 0, mn = INT_MAX;
  bool flag = false;
  fl(i, 0, n) {
    if (mp[a[i]] == 1) {
      flag = true;
      if (mn > a[i]) {
        mn = a[i];
        x = i;
      }
      // x = i;
      // break;
    }
  }
  if (flag)
    pr(x + 1);
  else
    pr(-1);
}

int32_t main() {
  scortier();
  test solve();
  return 0;
}