
// Problem: Fair Elections
// Contest: CodeChef - January Challenge 2021 Division 3
// URL: https://www.codechef.com/JAN21C/problems/FAIRELCT
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
  int n, m;
  cin >> n >> m;
  int a[n], b[m];
  int s1 = 0, s2 = 0;
  fl(i, 0, n) cin >> a[i], s1 += a[i];
  fl(i, 0, m) cin >> b[i], s2 += b[i];
  sort(a, a + n);
  sort(b, b + m);
  int i = 0, j = m - 1, cnt = 0;
  while (s2 > s1) {
    s1 = s1 - a[i] + b[j];
    s2 = s2 + a[i] - b[j];
    i++;
    j--;
    cnt++;
    // pr(s1);
  }
  pr(cnt);
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}