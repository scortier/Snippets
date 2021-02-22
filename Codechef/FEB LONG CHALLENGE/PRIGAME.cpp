
// Problem: Prime Game
// Contest: CodeChef - February Challenge 2021 Division 2
// URL: https://www.codechef.com/FEB21B/problems/PRIGAME
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// Handle: Scortier (Aditya Singh Sisodiya)
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define int ll
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
/*
int fact(int n) {
  if (n == 0 or n == 1) return 1;
  return fact(n - 1) * n;
}

vector<int> prime(int n) {
  bool prime[n + 1];
  memset(prme, true, sizeof(prime));

  for (int p = 2; p * p <= n; p++) {
    if (prime[p] == true) {
      for (int i = p * p; i <= n; i += p) prime[i] = false;
    }
  }
  // PRINT ALL PRIME NUMBERS
  for (int p = 2; p <= n; p++)
    if (prime[p]) cout << p << " ";
}

void solve() {
  int x, y;
  cin >> x >> y;
  if (x == 1)
    pr("Chef");
  else {
  }
}
*/
// #define N 1000000
/*
bool prime[N + 1];
int count_prime[N + 1];
void func() {
  for (int p = 2; p * p <= N; p++) {
    if (prime[p] == false) {
      for (int i = p * p; i <= N; i += p) prime[i] = true;
    }
  }
  int cnt = 0;
  for (int i = 2; i <= N; i++) {
    if (!prime[i]) cnt++;
    count_prime[i] = cnt;
  }
}
void solve() {
  int x, y, c = 0;
  cin >> x >> y;
  int a[N];
  for (int i = 3; i < N; i++) {
    if (!prime[i]) {
      if (!prime[i + 2]) c++;
    }
    a[i + 2] = c;
  }
  if (y == 1) {
    if (x > 2)
      pr("Divyam");
    else
      pr("Chef");
  } else {
    if (c == 0) {
      func();
      // for (int i = 0; i < N; i++) {
      // int ele;
      // cin >> ele;
      // a[ele]++;
      // }
      // sort(a, a + 101, greater<int>());
      c = 1;
    } else if (count_prime[x] > y)
      pr("Divyam");
    else
      pr("Chef");
  }
}*/

bool prime(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int32_t main() {
  lage_rho();
  int p[1000001];
  p[0] = 0;
  p[1] = 0;
  int cnt = 0;
  for (int i = 2; i < 1000001; i++) {
    if (prime(i)) cnt++;
    p[i] = cnt;
  }
  int tt;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    if (p[n] > k) {
      cout << "Divyam\n";
    } else
      cout << "Chef\n";
  }
  return 0;
}