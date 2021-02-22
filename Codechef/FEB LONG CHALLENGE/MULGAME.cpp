// Problem: Multiple Games
// Contest: CodeChef - February Challenge 2021 Division 2
// URL: https://www.codechef.com/FEB21B/problems/MULGAME
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

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

ll min(ll a, ll b)

{
  return (a <= b ? a : b);
}

ll max(ll a, ll b)

{
  return (a >= b ? a : b);
}

ll gd(ll a, ll b)

{
  if (b == 0) return a;

  return gd(b, a % b);
}

ll pwr(ll a, ll b)

{
  ll res = 0;

  while (b)

  {
    if (b % 2 == 1)

    {
      res *= a;
    }

    a = a * a;

    b >>= 1;
  }

  return res;
}

int main()

{
  lage_rho();

  // freopen("input.txt", "r", stdin);

  //  freopen("output.txt", "w", stdout);

  int t;

  cin >> t;

  while (t--)

  {
    int n, q, m;

    cin >> n >> q >> m;

    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    int b[1000001] = {};

    // int ans[m + 1] = {};

    map<pair<int, int>, int> m1;

    while (q--)

    {
      int l, r;

      cin >> l >> r;

      l--, r--;

      if (a[l] > m)

        continue;

      else if (a[l] <= m && a[r] > m)

      {
        b[a[l]]++, b[m + 1]--;

      }

      else if (a[r] <= m)

      {
        b[a[l]]++, b[m + 1]--;

        m1[{a[l], a[r]}]++;
      }
    }

    for (auto x : m1)

    {
      int k = x.first.first, p = x.first.second, l = x.second;

      b[p + k] -= l, b[p + 2 * k] += l;

      // m1[{a[l],a[r]}]++;

      int c = p + 2 * k;

      while (c + p <= m)

      {
        c += p;

        b[c] -= l, b[c + k] += l;

        c += k;
      }
    }

    for (int i = 1; i <= m; i++)

    {
      b[i] += b[i - 1];

      // ans[i]+=b[i];
    }

    int maxx = 0;

    for (int i = 0; i <= m; i++)

    {
      //  cout<<ans[i]<<" ";

      maxx = max(b[i], maxx);
    }

    cout << maxx << "\n";
  }

  return 0;
}