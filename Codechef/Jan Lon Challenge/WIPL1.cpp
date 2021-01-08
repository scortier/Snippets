
// Problem: Watching CPL
// Contest: CodeChef - January Challenge 2021 Division 3
// URL: https://www.codechef.com/JAN21C/problems/WIPL
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// Handle Name: Scortier (Aditya Singh Sisodiya)
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
} /**********=============########################============***********/

ll possible_combn(ll x, ll a[], ll n) {
  ll possible_sum[x + 1] = {'\0'};

  possible_sum[0] = 1;

  fl(i, 0, n) {
    for (ll j = x; j >= a[i]; j--) {
      if (possible_sum[j - a[i]] == 1) possible_sum[j] = 1;
    }
  }
  return possible_sum[x];
}

void solve() {
  ll n, k;
  cin >> n >> k;
  ll sum = 0, ans = 0;
  ll a[n] = {'\0'};
  fl(i, 0, n) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a, a + n, greater<>());

  if (n == 1 or sum < 2 * k) {
    pr(-1);
    return;
  }
  // sum==2*k then sum must be even
  else if (sum == 2 * k) {
    if (sum % 2 == 1 or a[0] > k) {
      pr(-1);
      return;
    }
    // exact possible case
    else if (a[0] == k) {
      pr(n);
    }

    else {
      // true or say
      if (possible_combn(k, a, n)) {
        pr(n);
        return;
      } else {
        pr(-1);
        return;
      }
    }
  }
  // one height is made only made second height from other remaining ele
  else if (a[0] >= k) {
    ans = 1;
    ll tempsum = 0;
    fl(i, 1, n) {
      tempsum += a[i];
      ans++;
      if (tempsum >= k) {
        pr(ans);
        return;
      }
    }
  } else {
    // goto that ele where tempsum val become greater than 2*k
    ll tempsum = 0;
    fl(i, 0, n) {
      tempsum += a[i];
      if (tempsum >= 2 * k) {
        pr(i + 1);
        return;
      }
    }
    pr(-1);
  }
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}
