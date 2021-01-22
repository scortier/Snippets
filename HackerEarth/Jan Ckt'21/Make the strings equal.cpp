
// Problem: Make the strings equal
// Contest: HackerEarth - January Circuits '21
// URL:
// https://www.hackerearth.com/challenges/competitive/january-circuits-21/algorithm/make-them-equal-too-89585e71/
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
int minSwaps(string arr, int n) {
  // Create an array of
  // pairs where first
  // element is array element
  // and second element
  // is position of first element
  pair<int, int> arrPos[n];
  for (int i = 0; i < n; i++) {
    arrPos[i].first = arr[i];
    arrPos[i].second = i;
  }

  // Sort the array by array
  // element values to
  // get right position of
  // every element as second
  // element of pair.
  sort(arrPos, arrPos + n);

  // To keep track of visited elements.
  // Initialize
  // all elements as not visited or false.
  vector<bool> vis(n, false);

  // Initialize result
  int ans = 0;

  // Traverse array elements
  for (int i = 0; i < n; i++) {
    // already swapped and corrected or
    // already present at correct pos
    if (vis[i] || arrPos[i].second == i) continue;

    // find out the number of  node in
    // this cycle and add in ans
    int cycle_size = 0;
    int j = i;
    while (!vis[j]) {
      vis[j] = 1;

      // move to next node
      j = arrPos[j].second;
      cycle_size++;
    }

    // Update answer by adding current cycle.
    if (cycle_size > 0) {
      ans += (cycle_size - 1);
    }
  }

  // Return result
  return ans;
}

void solve() {
  int n;
  cin >> n;
  string a, b;
  cin >> a >> b;
  if (a == b) {
    pr("YES");
    return;
  } else {
    // string x=sort(a.begin(), a.end());
    // string y=sort(b.begin(), b.end());
    int p = minSwaps(a, n);
    int q = minSwaps(b, n);
    pr(p);
    pr(q);
    if (p == q)
      pr("YES");
    else
      pr("NO");
    // if (n == 2)
    // pr("NO");
    // else if (a == b)
    // pr("YES");
    // else
    // pr("NO");
  }
}
int32_t main() {
  lage_rho();
  test solve();
  return 0;
}