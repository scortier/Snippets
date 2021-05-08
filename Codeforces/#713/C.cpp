// Problem: C. A-B Palindrome
// Contest: Codeforces - Codeforces Round #713 (Div. 3)
// URL: https://codeforces.com/contest/1512/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

/*
Meri Zameen tumse Gehri hai,
Dekhna Asmaan tumse Ucha hoga.
*/
// Handle: Scortier (Aditya Singh Sisodiya)
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define test \
  int tt;    \
  cin >> tt; \
  while (tt--)
#define int long long int
#define fl(i, a, b) for (int i = a; i < b; i++)
#define bfl(i, a, b) for (int i = b - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007
#define PI acos(-1.0)
#define assign(x, val) memset(x, val, sizeof(x))
#define prec(val, dig) fixed << setprecision(dig) << val
#define pi pair<int, int>
#define pr(gg) cout << gg << endl
#define mk(arr, n, type) type *arr = new type[n];
void scortier() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

void solve() {
  int a, b;
  cin >> a >> b;
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    if (s[i] == '0')
      a--;
    else if (s[i] == '1')
      b--;
  }
  for (int i = 0; i < n; i++) {
    if (s[i] != '?') {
      // if s[i]=s[n-i-1]='?'
      if (s[n - i - 1] == '?') {
        if (s[i] == '0') {
          s[n - i - 1] = '0';
          a--;
        } else {
          s[n - i - 1] = '1';
          b--;
        }
      } else {
        if (s[i] != s[n - i - 1]) {
          pr(-1);
          return;
        }
      }
    }
  }
  // checking boundary condn
  if (a < 0 or b < 0) {
    pr(-1);
    return;
  }
  // impossible condn
  if (a % 2 == 1 or b % 2 == 1) {
    if (n % 2 == 0 or (a % 2 == 1 and b % 2 == 1)) {
      pr(-1);
      return;
    }
    if (s[n / 2] != '?') {
      pr(-1);
      return;
    }
    if (a % 2 == 1) {
      a--;
      s[n / 2] = '0';
    } else {
      b--;
      s[n / 2] = '1';
    }
  }

  for (int i = 0; i < n; i++) {
    if (s[i] == '?') {
      if (a > 0) {
        s[i] = s[n - i - 1] = '0';
        a = a - 2;  // dono side p daal rhe h
      } else if (b > 0) {
        s[i] = s[n - i - 1] = '1';
        b = b - 2;
      } else {
        pr(-1);
        return;
      }
    }
  }
  pr(s);
}

int32_t main() {
  scortier();
  test solve();
  return 0;
}