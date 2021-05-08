// Problem: Chef and Dice
// Contest: CodeChef - April Challenge 2021 Division 2
// URL: https://www.codechef.com/APRIL21B/problems/SDICE
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
#define int long long int
#define fl(i, a, b) for (int i = a; i < b; i++)
#define bfl(i, a, b) for (int i = b - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
// #define f first
#define s second
#define MOD 1000000007
#define PI acos(-1.0)
#define assign(x, val) memset(x, val, sizeof(x))
#define prec(val, dig) fixed << setprecision(dig) << val
#define pi pair<int, int>
#define pr(gg) cout << gg << endl
#define mk(arr, n, type) type *arr = new type[n];
// #define e endl
void scortier() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

// 2face = 11; 3face= 15; 4face=18(6+5+4+30); 5face= 20.

void sol() {
  int n;
  cin >> n;
  if (n == 1)
    pr(20);
  else if (n == 2)
    pr(36);
  else if (n == 3)
    pr(51);
  else if (n == 4)
    pr(60);
  else {
    int rem = n % 4;
    int ans = ((n - rem) / 4) * 44;
    if (rem == 0)
      ans += 16;
    else if (rem == 1)
      ans += 32;
    else if (rem == 2)
      ans += 44;
    else if (rem == 3)
      ans += 55;
    pr(ans);
  }
}
int32_t main() {
  scortier();
  test sol();
  return 0;
}