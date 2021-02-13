// Problem: B. Choosing Laptop
// Contest: Codeforces - Codeforces Beta Round #82 (Div. 2)
// URL: https://codeforces.com/contest/106/problem/B
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

long n, a[2000], b[2000], c[2000], d[2000], fl[2000], ansp, ansc;
int main() {
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      if (a[i] < a[j] && b[i] < b[j] && c[i] < c[j]) fl[i] = 1;
  ansc = 1000000;
  ansp = 0;
  for (int i = 1; i <= n; i++)
    if (fl[i] == 0 && d[i] < ansc) {
      ansc = d[i];
      ansp = i;
    }
  cout << ansp << endl;
  cin.get();
  cin.get();
  return 0;
}
