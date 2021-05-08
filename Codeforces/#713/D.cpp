// Problem: D. Corrupted Array
// Contest: Codeforces - Codeforces Round #713 (Div. 3)
// URL: https://codeforces.com/contest/1512/problem/D
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
// sum(b)=2*(a+x)
// or iterate from both end to check the remaining sum as s
void solve() {
  int n;
  cin >> n;

  vector<int> b(n + 2);
  for (int i = 0; i < n + 2; i++) {
    cin >> b[i];
  }
  int sum = accumulate(b.begin(), b.end(), 0LL);
  sort(b.begin(), b.end());
  for (int i = 0; i < n + 1; i++) {
    int x = b[i];
    int s = b[n + 1];
    int rest = sum - x - s;
    if (rest == s) {
      for (int j = 0; j < i; j++) {
        cout << b[j] << " ";
      }
      for (int j = i + 1; j < n + 1; j++) {
        cout << b[j] << " ";
      }
      cout << endl;
      return;
    }
  }
  int x = b[n + 1];
  int s = b[n];
  int rest = sum - x - s;
  if (rest == s) {
    for (int j = 0; j < n; j++) {
      cout << b[j] << " ";
    }
    cout << endl;
    return;
  }
  // pr(-1);
  pr(-1);
}

int32_t main() {
  scortier();
  test solve();
  return 0;
}