// Problem: Binary String MEX
// Contest: CodeChef - April Challenge 2021 Division 2
// URL: https://www.codechef.com/APRIL21B/problems/MEXSTR
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
const int MAX = 1e6;
void scortier() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/

bool util(string s1, string s2) {
  int j = 0;
  for (int i = 0; i < s2.size(); i++) {
    if (s1[j] == s2[i]) j++;
    if (j == s1.size()) return true;
  }
  return false;
}
string gen_bin(string str) {
  queue<string> q;
  q.push("1");
  while (true) {
    string s1 = q.front();

    q.pop();
    if (util(s1, str) == false) return s1;

    string s2 = s1;
    q.push(s1.append("0"));
    q.push(s2.append("1"));
  }
}
void solve() {
  string s;
  cin >> s;
  int flag = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0') flag = 1;
  }
  if (flag == 0)
    pr(0);
  else
    pr(gen_bin(s));
}


int dp[MAXN + 2], dp1[MAXN + 2];
int next0[MAXN], next1[MAXN];

void solution()
{
  string s;
  cin >> s;
  int n = s.length();

  int last_pos = -1;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '0') {
      for (int j = last_pos + 1; j <= i; ++j)
        next0[j] = i;
      last_pos = i;
    }
  }

  for (int i = last_pos + 1; i < n; ++i)
    next0[i] = n;

  if (next0[0] == n) {
    cout << "0\n";
    return;
  }

  last_pos = -1;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '1') {
      for (int j = last_pos + 1; j <= i; ++j)
        next1[j] = i;
      last_pos = i;
    }
  }

  for (int i = last_pos + 1; i < n; ++i)
    next1[i] = n;

  dp[n] = dp[n + 1] = 0;
  dp1[n] = dp1[n + 1] = 0;
  for (int i = n - 1; i >= 0; --i)
  {
    dp[i] = dp[i + 1];
    if (s[i] == '0' && next1[i] < n)
      dp[i] = max(dp[i], dp[next1[i] + 1] + 1);
    if (s[i] '1' && next0[i] < n)
      dp[i] = max(dp[i], dp[next0[i] + 1] + 1);
    dp1[i] = dp1[i + 1];
    if (next1[i] < n)
      dp1[i] = max(dp1[i], dp[next1[i] + 1] + 1);

  }

  int len = dp1[0] + 1;
  int curind = next1[0] + 1;
  string ans = "1";
  for (int i = 1; i < len; ++i)
  {
    if (curind >= n)
    {
      ans.push_back('0');
      continue;
    }
    if (next0[curind] >= n) {
      ans.push_back('0');
      curind = next0[curind] + 1;
      continue;
    }
    if (dp[next0[curind] + 1] < len - i - 1) {
      ans.push_back('0');
      curind = next0[curind] + 1;
    }
    else {
      ans.push_back('1');
      curind = next1[curind] + 1;
    }
  }
  cout << ans << '\n';
}



int32_t main() {
  scortier();
  test solve();
  return 0;
}