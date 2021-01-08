
// Problem: Encoded String
// Contest: CodeChef - January Challenge 2021 Division 3
// URL: https://www.codechef.com/JAN21C/problems/DECODEIT
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
  int n;
  cin >> n;
  string s;
  cin >> s;
  string result;
  vector<char> v{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
                 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
  int l = 0, r = v.size() - 1;
  for (int i = 0; i < n; i++) {
    if ((i + 1) % 4 == 0) {
      if (s[i] == '1')
        result += v[l + 1];
      else
        result += v[l];
      l = 0;
      r = v.size() - 1;
    } else {
      int m = (l + r) / 2;
      if (s[i] == '1') {
        l = m + 1;
      } else {
        r = m;
      }
    }
  }
  cout << result << endl;
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}