
// Problem: Boolean Game
// Contest: CodeChef - April Challenge 2021 Division 2
// URL: https://www.codechef.com/APRIL21B/problems/BOOLGAME
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// Handle: Scortier (Aditya Singh Sisodiya)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define test \
  int tt;    \
  cin >> tt; \
  while (tt--)
#define fl(i, a, b) for (int i = a; i < b; i++)
#define bfl(i, a, b) for (int i = b - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007
#define PI acos(-1.0)
#define vi vector<int>
#define vvi vector<vi>
#define vvp vector<vector<pair<int, int>>>
#define vp vector<pair<int, int>>
#define st set<int>
#define assign(x, value) memset(x, value, sizeof(x))
#define prec(value, dig) fixed << setprecision(dig) << value
#define pi pair<int, int>
#define pr(gg) cout << gg << endl
// #define int ll
#define mk(arr, n, type) type *arr = new type[n];
#define e endl
#define all(v) v.begin(), v.end()
void scortier() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  vi arr_1(n + 1);
  fl(i, 0, n) { cin >> arr_1[i + 1]; }
  vvp arr(n + 1);
  fl(i, 0, m) {
    int u, v, d;
    cin >> u >> v >> d;
    arr[u].pb(mp(i, d));
    arr[v].pb(mp(i, d));
  }
  // storing the boolean value
  vvp store(n + 1);

  store[0].pb(mp(0, 0));

  for (int i = 1; i <= n; i++) {
    vp sarkari;

    sarkari.insert(sarkari.end(), all(store[i - 1]));
    int current = 0, naya_mask = 0;

    st open;
    // const through bit manipln by making masks.
    for (int j = i; j >= 1; j--) {
      current += arr_1[j];
      naya_mask ^= 1LL << j;
      for (auto &[index, rr] : arr[j]) {
        if (open.count(index)) {
          current += rr;
        } else {
          open.insert(index);
        }
      }
      if (j > 1) {
        for (auto &[value, purana_mask] : store[j - 2]) {
          sarkari.pb(mp(value + current, naya_mask ^ purana_mask));
        }
      } else {
        sarkari.pb(mp(current, naya_mask));
      }
    }

    sort(sarkari.rbegin(), sarkari.rend());

    st last_st;
    int comp_fill = 0;
    for (int j = 0; j < sarkari.size() && comp_fill < k; j++) {
      if (last_st.count(sarkari[j].ss)) continue;
      store[i].pb(sarkari[j]);
      comp_fill++;
      last_st.insert(sarkari[j].ss);
    }
  }
  for (int i = 0; i < k; i++) {
    cout << store[n][i].ff << " ";
  }
  cout << endl;
}

int32_t main() {
  scortier();
  test solve();
  return 0;
}