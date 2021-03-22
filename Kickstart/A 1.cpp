// Problem: Allocation
// Contest: Google Coding Competitions - Round A 2020 - Kick Start 2020
// URL:
// https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3f56
// Memory Limit: 1024 MB
// Time Limit: 15000 ms

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
  int n, bug;
  cin >> n >> bug;
  int a[n];
  int cnt = 0;
  fl(i, 0, n) cin >> a[i];
  sort(a, a + n);
  fl(i, 0, n) {
    if (a[i] <= bug) {
      bug = bug - a[i];
      cnt++;
    }
  }
  pr(cnt);
}

int32_t main() {
  lage_rho();
  int i = 1;
  test {
    cout << "Case #" << i << ": ";
    solve();
    i++;
  }
  return 0;
}