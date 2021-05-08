// Problem: Chef and Pair Flips
// Contest: CodeChef - April Challenge 2021 Division 2
// URL: https://www.codechef.com/APRIL21B/problems/PAIRFLIP
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
#define mapp make_pair
#define ff first
#define ss second
#define MOD 1000000007
#define PI acos(-1.0)
#define assign(x, val) memset(x, val, sizeof(x))
#define prec(val, dig) fixed << setprecision(dig) << val
#define pi pair<int, int>
#define umm unordered_map<int, vector<int>>
#define pr(gg) cout << gg << endl
#define mk(arr, n, type) type *arr = new type[n];
#define vs vector<string>
void scortier() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

/*
void solution() {
  string s;
  cin >> s;
  int n = s.size();
  string answult = "1";

  int end_position = -1;
  fl(i, 0, n) {
    if (s[i] == '0') {
      for (int j = end_position + 1; j <= i; ++j) {
        bin_ZERO[j] = i;
      }
      end_position = i;
    }
  }

  fl(i, end_position + 1, n) { bin_ZERO[i] = n; }

  if (bin_ZERO[0] == n) {
    cout << "0\n";
    return;
  }

  end_position = -1;
  fl(i, 0, n) {
    if (s[i] == '1') {
      for (int j = end_position + 1; j <= i; ++j) {
        bin_ONE[j] = i;
      }
      end_position = i;
    }
  }
}
*/
void solve() {
  int n, m, e;
  cin >> n >> m >> e;
  char a[n][m], b[n][m];
  fl(i, 0, n) {
    fl(j, 0, m) { cin >> a[i][j]; }
  }
  fl(i, 0, n) {
    fl(j, 0, m) { cin >> b[i][j]; }
  }
  vs answ;
  umm mapp;
  bool f = true, fla = true;
  vs soltn;
  umm map_1;

  fl(i, 0, n) {
    stack<int> st;
    for (int j = m - 1; j >= 0; j--) {
      if (a[i][j] != b[i][j]) st.push(j);
    }
    while (st.size() >= 2) {
      int f = st.top();
      st.pop();
      int c = st.top();
      st.pop();
      string s = "R " + to_string(i + 1) + " " + to_string(f + 1) + " " +
                 to_string(c + 1);
      answ.push_back(s);
    }
    if (!st.empty()) {
      int x = st.top();
      st.pop();
      mapp[x].push_back(i);
    }
  }
  /*
  int ans = 0;
  int a[n + 1][m + 1] = {'\0'};
  fl(i, 1, n + 1) {
    fl(j, 1, m + 1) {
      cin >> a[i][j];
      if (a[i][j] >= k) {
        ans++;
  */
  for (auto &j : mapp) {
    if ((j.ss.size()) % 2 == 1) {
      f = false;
      break;
    }
    /*
    string s2 = sl;
                q. push(sl.append("0"));
                q.push(s2.append("1"));
    */
    for (int i = 0; i < (j.ss.size()) - 1; i++) {
      string s = "C " + to_string(j.ff + 1) + " " + to_string((j.ss)[i] + 1) +
                 " " + to_string((j.ss)[i + 1] + 1);
      answ.push_back(s);
    }
  }
  for (int j = 0; j <= m - 1; j++) {
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
      if (a[i][j] != b[i][j]) st.push(i);
    }
    /*
    if (tim % re == 0) {
      memory_info();
      disk_stat();
      mode_info();
      context_switch_and_process_create();
    }

    */
    while (st.size() >= 2) {
      int f = st.top();
      st.pop();
      int c = st.top();
      st.pop();
      string s = "C " + to_string(j + 1) + " " + to_string(f + 1) + " " +
                 to_string(c + 1);
      soltn.push_back(s);
    }
    if (!st.empty()) {
      int x = st.top();
      st.pop();
      map_1[x].push_back(j);
    }
  }
  for (auto &i : map_1) {
    if ((i.ss.size()) % 2 == 1) {
      fla = false;
      break;
    }
    for (int j = 0; j < (i.ss.size()) - 1; j++) {
      string s = "R " + to_string(i.ff + 1) + " " + to_string((i.ss)[j] + 1) +
                 " " + to_string((i.ss)[j + 1] + 1);
      soltn.push_back(s);
    }
  }
  if (!f && !fla) {
    pr(-1);
    // cout << "-1\n";
    return;
  }
  if (answ.size() <= soltn.size()) {
    int zz = answ.size();
    pr(zz);
    if (e == 1)
      for (auto &s : answ) cout << s << endl;
  } else if (soltn.size() < answ.size()) {
    int yy = soltn.size();
    pr(yy);
    // cout << soltn.size() << endl;
    if (e == 1)
      for (auto &s : soltn) pr(s);
  }
}

int32_t main() {
  scortier();
  test solve();
  return 0;
}