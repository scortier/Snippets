
// Problem: A. Puzzle From the Future
// Contest: Codeforces - Codeforces Round #696 (Div. 2)
// URL: https://codeforces.com/contest/1474/problem/A
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

void solve() {
  long n;
  cin >> n;
  string s, s1;
  cin >> s;
  // char c = '1';
  s1 += (s[0] - '0' + 1) + '0';
  string s3;
  s3 += '1';
  for (int i = 1; i < n; i++) {
    int t1 = (s[i] - '0') + 1;
    int t2 = (s[i] - '0') + 0;
    if (t1 != s1[i - 1] - '0') {
      s1 += t1 + '0';
      s3 += '1';
    } else {
      s1 += t2 + '0';
      s3 += '0';
    }
  }
  cout << s3 << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}