
// Problem: A. Nezzar and Colorful Balls
// Contest: Codeforces - Codeforces Round #698 (Div. 2)
// URL: https://codeforces.com/contest/1478/problem/0
// Memory Limit: 512 MB
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
int fre(int arr[], int n) {
  // Insert all elements in hash.
  unordered_map<int, int> hash;
  for (int i = 0; i < n; i++) hash[arr[i]]++;

  // find the max frequency
  int max_count = 0, res = -1;
  for (auto i : hash) {
    if (max_count < i.second) {
      res = i.first;
      max_count = i.second;
    }
  }

  return max_count;
}

void solve() {
  int n;
  cin >> n;
  int a[n];
  int mp[n] = {0};
  fl(i, 0, n) cin >> a[i];
  cout << fre(a, n) << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}