// Problem: String Power
// Contest: CodeChef - April Challenge 2021 Division 2
// URL: https://www.codechef.com/APRIL21B/problems/STRPOW
// Memory Limit: 256 MB
// Time Limit: 2500 ms

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

void solve() {
  int n, q, k, s = 0;
  cin >> n;
  int a[n], p[n], B[n];
  fl(i, 0, n) {
    cin >> a[i] >> p[i] >> B[i];
    s += a[i] + p[i] - B[i];
  }
  while (q--) {
    cin >> k;
  }
  pr(s);
}

int32_t main() {
  scortier();
  test solve();
  return 0;
}