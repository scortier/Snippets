// Problem: Space Arrays
// Contest: CodeChef - March Challenge 2021 Division 2
// URL: https://www.codechef.com/MARCH21B/problems/SPACEARR
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
  cin >> n;
  int a[n];
  // bool flag = false;
  fl(i, 0, n) cin >> a[i];
  sort(a, a + n);
  int val = 0;
  int flag = 0;
  for (int i = 0; i < n; i++) {
    if (i + 1 - a[i] < 0) {
      flag = 1;
      break;
    }
    val = val + (i + 1 - a[i]);
  }
  if (flag == 1)
    cout << "Second" << endl;

  else {
    if (val % 2 == 1)
      cout << "First" << endl;
    else
      cout << "Second" << endl;
  }
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}