
// Problem: Team Name
// Contest: CodeChef - February Challenge 2021 Division 2
// URL: https://www.codechef.com/FEB21B/problems/TEAMNAME
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

// void solve() {
// int n;
// cin >> n;
// vector<string> a(n), b(n);
// fl(i, 0, n) cin >> a[i], b[i] = a[i];
// int ans = 0;
// for (int i = 0; i < n; i++) {
// for (int j = i; j < n; j++) {
// string x = a[i];
// string y = a[j];
// swap(x[0], y[0]);
// if (find(a.begin(), a.end(), x) != a.end() or
// (find(a.begin(), a.end(), y) != a.end()))
// continue;
// else
// ans += 2;
// }
// }
// pr(ans);
// }

// void solve() {}
void getIndex(vector<int> v, int K) {
  auto it = find(v.begin(), v.end(), K);

  // If element was found
  if (it != v.end()) {
    // calculating the index
    // of K
    int index = it - v.begin();
    cout << index << endl;
  } else {
    // If the element is not
    // present in the vector
    cout << "-1" << endl;
  }
}
int32_t main() {
  lage_rho();
  test {
    int n;
    cin >> n;
    vector<string> v;
    int count = 0;

    for (int i = 0; i < n; i++) {
      string ele;
      cin >> ele;
      v.pb(ele);
    }
    vector<int> a;
    fl(i, 0, n) a.pb(i);
    vector<int> pos(n);
    fl(i, 0, n - 1) pos[i] = i;
    vector<int> l;
    fl(i, 0, n) l.pb(i);
    vector<int> b(n);
    fl(i, 0, n - 1) b[i] = a[i];
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        auto it = find(v.begin(), v.end(), K);
        if (it != v.end()) {
          int index = it - v.begin();
          return index;
        } else {
          return -1;
        }
      }
    }
    // for (int p = 2; p * p < 10e+6; p++) {
    // if (prime[p] == false) {
    // for (int i = p * p; i <= 10e+6; i += p) prime[i] = true;
    // }
    // }
    fl(j, 1, n - 1) {
      int index = getIndex(a, b[j]);
      int p = pos[getIndex(a, b[j - 1])];
      int c = index;

      while (c <= p) {
        c += l[index];
        pos[index] = c;
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}