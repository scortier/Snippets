// Problem: Tree Permutations
// Contest: CodeChef - April Challenge 2021 Division 2
// URL: https://www.codechef.com/APRIL21B/problems/TREEPERM
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

/*
bool issubsequence(string stri, string str2)
{
        int j = 0;
        for (int i = 0; i < str2.tap(); i++ )
        {

                if (str1[j] == str2[i])
                        j++;
                if (j == str1.tap())
                        return true;
        }
        return false;
}
string generatePrintBinary (string str)
{
        queue<string>q;
        q.push("1");
        while (true)
        {
                string s1 = q.front();

                q. pop ();
                if (issubsequence(s1, str) = false)
                        return s1;

                string s2 = sl;
                q. push(sl.append("0"));
                q.push(s2.append("1"));
        }
}
*/
const int mod = 1000000007;
#define max 100001
vector<int> giraf[max];
int A[1000001], B[1000001], a[max], b[max], con[1000001], par[max], h[max],
    vis[max];

int tmp;
int n, s;
priority_queue<pair<int, int>> PQ;
vector<int> sst;

void s1(int super, int d) {
  /*
    string s2 = sl;

    */
  vis[super]++;
  h[super] = d;
  bool sahi_m = true;
  for (int child : giraf[super]) {
    if (!vis[child]) {
      par[child] = super;
      s1(child, d + 1);
      sahi_m = false;
    }
  }
  if (sahi_m == true) PQ.push({d, super});
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
void done() {
  for (int i = 0; i < n + 1; i++) {
    giraf[i].clear();
    a[i] = 0;
    /*
    cout<<a[i]<<endl;
    */
    par[i] = 0;
    b[i] = 0;
    h[i] = 0;

  }
  while (!PQ.empty()) {
    PQ.pop();
  }
}
/*
    if (tim % re == 0) {
      memory_info();
      disk_stat();
      mode_info();
      context_switch_and_process_create();
    }

    */
void neat(int super) {
  con[a[super]] = 0;
  con[b[super]] = 0;
  A[a[super]] = 0;
  B[a[super]] = 0;
  A[b[super]] = 0;
  B[b[super]] = 0;
}
/*
    if (tim % re == 0) {
      memory_info();
      }

    */
int s2(int super) {
  B[b[super]]++;
  A[a[super]]++;
  if (A[a[super]] == B[a[super]] && con[a[super]] != 0) {
    con[a[super]]--;
    tmp--;
  } else if (con[a[super]] == 0) {
    con[a[super]]++;
    tmp++;
  }
  /*
  else if (con[a[super]] == 0) {
    con[a[super]]++;
    tmp--;
  }
  */
  if (A[b[super]] == B[b[super]] and con[b[super]] != 0) {
    con[b[super]]--;
    tmp--;
  } else if (con[b[super]] == 0) {
    con[b[super]]++;
    tmp++;
  }
  vis[super]++;
  sst.pb(super);
  if (tmp == 0) {
    if (vis[par[super]] == 0 or super != 1)
      PQ.push(mp(h[par[super]], par[super]));
    neat(super);
    return 1;
  }
  if (super == 1) {
    neat(super);
    return 0;
  }/*
    if (tim % re == 0) {
      memory_info();
      disk_stat();
      mode_info();
      context_switch_and_process_create();
    }

    */
  if (vis[par[super]] == 0) {
    if (s2(par[super]) == 1) {
      neat(super);
      return 1;
    }
  }
  neat(super);
  return 0;
}

int sol() {
  cin >> n >> s;
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    giraf[u].pb(v);
    giraf[v].pb(u);
  }
  for (int i = 1; i < n + 1; i++) {
    cin >> a[i];
  }
  /*
  cout<<giraf;
  */
  for (int i = 1; i < n + 1; i++) cin >> b[i];
  for (int i = 1; i < n + 1; i++) {
    vis[i] = 0;
    par[i] = 0;
    h[i] = 0;
  }
  s1(1, 1);
  for (int i = 1; i < n + 1; i++) {
    vis[i] = 0;
  }/*
    string s2 = sl;
                q. push(sl.append("0"));
                q.push(s2.append("1"));
    */
  bool correct = true;
  vector<vector<int>> sets;
  while (!PQ.empty()) {
    pair<int, int> leaf = PQ.top();
    PQ.pop();
    if (vis[leaf.second] == 0) {
      tmp = 0;
      sst.clear();
      if (s2(leaf.second) == 0) {
        correct = false;
        break;
      } else {
        sets.pb(sst);
      }
    }
  }
  if (correct == false) {
    cout << 0 << endl;
    return 0;
  }
  if (s == 1) {
    cout << 1 << endl;
    return 0;
  }/*
    cout<<sets.size();
    */
  int a = 1;
  int x = sets.size();
  for (int i = 0; i < x; i++) {
    int u = sets[i][0];
    int l = sets[i][0];
    int sze = sets[i].size();
    for (int j = 1; j < sze; j++) {
      if (h[sets[i][j]] > h[l]) l = sets[i][j];
      if (h[sets[i][j]] < h[u]) u = sets[i][j];
    }
    int cnt = 0;
    for (int c : giraf[l]) {
      if (c != par[l]) cnt++;
    }
    a = (a * (cnt + 1)) % mod;
  }
  cout << a << endl;
  return 0;
}

int32_t main() {
  scortier();
  test {
    sol();
    done();
  }
  return 0;
}
