
// Problem: Replace the strings
// Contest: HackerEarth - January Circuits '21
// URL:
// https://www.hackerearth.com/challenges/competitive/january-circuits-21/algorithm/make-them-equal-ac0bab4a/
// Memory Limit: 256 MB
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

void solve() {
  int n;
  cin >> n;
  string s1, s2;
  cin >> s1 >> s2;
  map<char, int> m1, m2;
  for (int i = 0; i < n; i++) {
    if (s1[i] != '?') m1[s1[i]]++;

    if (s2[i] != '?') m2[s2[i]]++;
  }
  int coun = 0;
  for (char i = 'a'; i <= 'z'; i++) {
    coun += abs(m1[i] - m2[i]);
  }
  if (coun > 2)
    pr("NO");
  else
    pr("YES");
}

int32_t main() {
  lage_rho();
  test solve();
  return 0;
}