
// Problem: Blackjack
// Contest: CodeChef - January Challenge 2021 Division 3
// URL: https://www.codechef.com/JAN21C/problems/BLKJK
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

bool checkforzero(int arr[], int n, int l, int r) {
  int pref[n];
  pref[0] = arr[0];

  for (int i = 1; i < n; i++) {
    pref[i] = pref[i - 1] + arr[i];
  }

  for (int i = 0; i < n; i++) {
    if (pref[i] >= l && pref[i] <= r)
      return true;
    else if (pref[i] > r)
      return false;
  }

  return false;
}

bool checkforone(int arr[], int n, int l, int r) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      swap(arr[i], arr[j]);

      int sum = 0, flag = 0;
      for (int k = 0; k < n; k++) {
        sum += arr[k];
        if (sum >= l && sum <= r) {
          flag = 1;
          break;
        } else if (sum > r)
          break;
      }

      swap(arr[i], arr[j]);

      if (flag) return true;
    }
  }

  return false;
}
int32_t main() {
  lage_rho();

  int t;
  cin >> t;
  while (t--) {
    int n, l, r;
    cin >> n >> l >> r;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (checkforzero(arr, n, l, r)) {
      cout << "0\n";
    } else if (checkforone(arr, n, l, r)) {
      cout << "1\n";
    } else
      cout << "2\n";
  }
}