
// Problem: B. Nezzar and Lucky Number
// Contest: Codeforces - Codeforces Round #698 (Div. 2)
// URL: https://codeforces.com/contest/1478/problem/B
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

// void solve() {
// int n, d;
// cin >> n >> d;
// std::vector<ll> a(n);
// fl(i, 0, n) cin >> a[i];
// // fl(i, 0, n) cout << a[i];
// std::vector<ll> b(10e+4);
// b[0] = 11;
// fl(i, 1, n) b[i] = b[i - 1] + d;
// // fl(i, 0, n) cout << b[i] << " ";
// fl(i, 0, n) {
// if (a[i] < 10) {
// if (a[i] < 10 and a[i] % d == 0) {
// pr("YES");
// } else
// pr("NO");
// } else if (a[i] == 10) {
// if (d == 2 or d == 5)
// pr("YES");
// else
// pr("NO");
// }
//
// else {
// if (std::find(b.begin(), b.end(), a[i]) != b.end())
// std::cout << "NO" << endl;
// else
// std::cout << "YES" << endl;
// }
// }
// }
const int maxm = 100;
int yeh_bhi_theek_hai[maxm];
void check(vector<int> arr, int n) {
  yeh_bhi_theek_hai[0] = 1;
  sort(arr.begin(), arr.end());
  fl(i, 0, n) {
    int x = arr[i];
    if (yeh_bhi_theek_hai[x]) continue;
    for (int j = 0; j + x < maxm; ++j)
      if (yeh_bhi_theek_hai[j]) yeh_bhi_theek_hai[j + x] = 1;
  }
}

// void solve() {
//
// }

int32_t main() {
  lage_rho();
  test {
    ll q, d;
    cin >> q >> d;
    vector<ll> a(q);
    fl(i, 0, q) cin >> a[i];
    fl(i, 0, q) {
      if (a[i] >= (d * 10)) {
        pr("YES");
        continue;
      }
      vector<int> b;
      int size = b.size();
      b.pb(d);
      fl(j, 1, 10) { b.pb((d + (10 * j))); }
      check(b, (int)b.size());
      if (yeh_bhi_theek_hai[(int)a[i]])
        pr("YES");
      else
        pr("NO");
      memset(yeh_bhi_theek_hai, 0, sizeof(yeh_bhi_theek_hai));
    }
  }
  return 0;
}