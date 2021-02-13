// Problem: B. Sum of Digits
// Contest: Codeforces - Codeforces Beta Round #79 (Div. 2 Only)
// URL: https://codeforces.com/contest/102/problem/B
// Memory Limit: 265 MB
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
string s;

int gsum(int n) {
  int s = 0;
  while (n) {
    s += n % 10;
    n /= 10;
  }
  return s;
}

void solve() {
  cin >> s;
  int n = s.size();
  if (n == 1) {
    pr(0);
    return;
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += (s[i] - '0');
  }
  int ans = 1;
  while (sum > 9) {
    sum = gsum(sum);
    ans++;
  }
  pr(ans);
}

int32_t main() {
  lage_rho();
  solve();
  return 0;
}