// Problem: Worthy Matrix
// Contest: CodeChef - April Challenge 2021 Division 2
// URL: https://www.codechef.com/APRIL21B/problems/KAVGMAT
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

void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  int ans = 0;
  int a[n + 1][m + 1] = {'\0'};
  fl(i, 1, n + 1) {
    fl(j, 1, m + 1) {
      cin >> a[i][j];
      if (a[i][j] >= k) {
        ans++;
      }
    }
  }

  int mtrix[n + 1][m + 1] = {'\0'};
  assign(mtrix, 0);

  mtrix[1][1] = a[1][1];
  for (int j = 2; j <= m; j++) mtrix[1][j] = mtrix[1][j - 1] + a[1][j];

  for (int i = 2; i <= n; i++) mtrix[i][1] = mtrix[i - 1][1] + a[i][1];

  for (int i = 2; i <= n; i++) {
    for (int j = 2; j <= m; j++) {
      mtrix[i][j] =
        mtrix[i - 1][j] + mtrix[i][j - 1] - mtrix[i - 1][j - 1] + a[i][j];
    }
  }

  int mn = min(n, m);
  for (int tap = 2; tap <= mn; tap++) {
    for (int i = n; (i - tap) >= 0; i--) {
      for (int j = m; (j - tap) >= 0; j--) {
        int temp = mtrix[i][j] - mtrix[i - tap][j] - mtrix[i][j - tap] +
                   mtrix[i - tap][j - tap];
        if (((double)temp / (double)(tap * tap)) >= k) ans++;
      }
    }
  }
  pr(ans);
}
*/

void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  // int ans = 0;
  int a[n + 1][m + 1];
  fl(i, 0, n + 1) {
    fl(j, 0, m + 1) {
      if (i == 0 or j == 0)a[i][j] = 0;
      else
        cin >> a[i][j];
    }
  }
  for (int i = 0; i <= n; i++)
  {
    double prev = 0;
    for (int j = 0; j <= m; j++)
    {
      a[i][j] += prev;
      prev = a[i][j];
    }
  }

  fl(i, 0, m + 1)
  {
    double prev = 0;
    fl(j, 0, n + 1)
    {
      a[j][i] += prev;
      prev = a[j][i];
    }
  }

  int mn = min(m, n);

  for (int w = 1; w <= mn; w++)
  {
    for (int i = w; i <= n; i++)
    {
      for (int j = w; j <= m; j++)
      {
        if ((a[i][j] + a[i - w][j - w] - a[i][j - w] - a[i - w][j]) / (w * w >= k))
          ans++;
      }
    }
  }
  pr(ans);
}

int32_t main() {
  scortier();
  test solve();
  return 0;
}