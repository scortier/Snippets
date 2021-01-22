
// Problem: Tree construction
// Contest: HackerEarth - January Circuits '21
// URL:
// https://www.hackerearth.com/challenges/competitive/january-circuits-21/approximate/tree-construction-7b3cb288/
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
// #define ll long long int
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

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int N = 1e5 + 10;

int p[N];
ll c[N];

bool solve(int n, int k, ll s);

int main() {
  lage_rho();
  int n;
  ll s;
  cin >> n >> s;
  int lo = 1, hi = n - 1;
  while (lo <= hi) {
    int mid = (lo + hi) / 2;
    if (solve(n, mid, s)) {
      hi = mid - 1;
    } else {
      lo = mid + 1;
    }
  }
  // cout << hi + 1 << endl;
  if (hi + 1 < n) {
    solve(n, hi + 1, s);

    for (int i = 2; i <= n; ++i) {
      cout << p[i] << ' ';
    }
    cout << endl;
  } else {
    cout << "-1";
  }
}

bool solve(int n, int k, ll s) {
  memset(c, 0, sizeof(c));
  c[1] = 1;
  --n;
  --s;
  for (int i = 2; n > 0; ++i) {
    int mx = min(ll(n), k * c[i - 1]);
    ll temp = -1;
    for (int j = 1; j <= mx; ++j) {
      if (ll(i) * j > s) {
        break;
      }
      if (ll(i) * n + (ll(n - j) * (n - j + 1)) / 2 >= s) {
        temp = j;
      } else {
        break;
      }
    }
    if (temp == -1) {
      return false;
    }
    c[i] = temp;
    n -= temp;
    s -= temp * i;
  }
  if (s) {
    return false;
  }
  // cout << endl;
  // for (int i = 1; c[i]; ++i) {
  // 	cout << c[i] << ' ';
  // }
  // cout << endl;
  int nxt = 1;
  for (int i = 1; c[i + 1] > 0; ++i) {
    int temp = nxt + c[i], ctr = 0, cur = nxt;
    for (int j = 0; j < c[i + 1]; ++j) {
      p[temp] = cur;
      ++ctr;
      if (ctr == k) {
        ctr = 0;
        ++cur;
      }
      ++temp;
    }
    nxt += c[i];
  }
  return true;
}
