
// Problem: B - Remove It
// Contest: AtCoder - AtCoder Beginner Contest 191
// URL: https://atcoder.jp/contests/abc191/tasks/abc191_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
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
int de(int arr[], int n, int x) {
  // If x is last element, nothing to do
  if (arr[n - 1] == x) return (n - 1);

  // Start from rightmost element and keep moving
  // elements one position ahead.
  int prev = arr[n - 1], i;
  for (i = n - 2; i >= 0 && arr[i] != x; i--) {
    int curr = arr[i];
    arr[i] = prev;
    prev = curr;
  }

  // If element was not found
  if (i < 0) return 0;

  // Else move the next element in place of x
  arr[i] = prev;

  return (n - 1);
}
void solve() {
  int n, x;
  cin >> n >> x;
  int a[n];
  vector<int> b;
  fl(i, 0, n) cin >> a[i];
  // int index = -1;
  int j = 0, i = 0;
  while (i < n) {
    if (a[i] == x) {
      i++;
    } else {
      b.pb(a[i]);
      i++;
      // j++;
    }
  }
  for (int i = 0; i < b.size(); i++) cout << b[i] << " ";
}

int32_t main() {
  lage_rho();
  solve();
  return 0;
}