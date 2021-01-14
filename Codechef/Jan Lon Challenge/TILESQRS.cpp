
// Problem: Guess the Tiling
// Contest: CodeChef - January Challenge 2021 Division 3
// URL: https://www.codechef.com/JAN21C/problems/TILESQRS
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

// Handle: Scortier (Aditya Singh Sisodiya)

#include <bits/stdc++.h>
using namespace std;
#define fin cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define fout cout.flush()
#define fill(w, t) memset(w, t, sizeof(w))
#define S(t) (ll) t.size()
#define bl '\n'
#define nl cout << bl
#define input(azz, szz, ezz) fll(pzz, szz, ezz) cin >> azz[pzz]
#define all(v) v.begin(), v.end()
#define ll long long
#define ldb long double
#define db double
#define ull unsigned long long
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mk make_pair
#define pll pair<ll, ll>
#define pldb pair<ldb, ldb>
#define fi first
#define se second
#define vull vector<ull>
#define vll vector<ll>
#define mll map<ll, ll>
#define mldb map<ldb, ldb>
#define umll unordered_map<ll, ll>
#define sll set<ll>
#define usll unordered_set<ll>
#define fll(i, azz, bzz) for (ll i = (azz); i <= (bzz); ++i)
#define rfor(i, bzz, azz) for (ll i = (bzz); i >= (azz); --i)
vll fact, ifact;
vll primes;
vll spf;
void lage_rho() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
/**********=============########################============***********/
bool solve(ll countu) {
  ll n, q, k;
  cin >> n >> q >> k;
  ll ans[n][n];
  ll r;
  fill(ans, -1);
  cout << 1 << " " << 1 << " " << 1 << endl;
  fout;
  cin >> r;
  if (r == -1) return false;
  if (r < k) {
    ans[0][0] = 1;
    ans[0][1] = 1;
    ans[1][0] = 1;
    ans[1][1] = 0;
  } else if (r > k) {
    ans[0][0] = 0;
    ans[0][1] = 1;
    ans[1][0] = 1;
    ans[1][1] = 0;
  } else {
    bool flag = false;
    ll ri = 0, ci = 1;
    fll(i, 0, 3) {
      ll rj = 0, cj = 2;
      fll(j, 0, 2) {
        k = r;
        cout << 1 << " " << (rj % 2) + 1 << " " << cj << endl;
        fout;
        cin >> r;
        if (r == -1) return false;
        if (r > k) {
          if (n == 2) {
            flag = true;
            ans[0][0] = 0;
            ans[0][1] = 1;
            ans[1][0] = 1;
            ans[1][1] = 0;
            break;
          }
          k = r;
          cout << 1 << " " << 1 << " " << 1 << endl;
          fout;
          cin >> r;
          if (r == -1) return false;
          if (r < k) {
            flag = true;
            ans[0][0] = 1;
            ans[0][1] = 1;
            ans[1][0] = 1;
            ans[1][1] = 0;
            break;
          }
          k = r;
          cout << 1 << " " << 1 << " " << 1 << endl;
          fout;
          cin >> r;
          if (r == -1) return false;
        }
        rj++;
      }
      if (flag) break;
      ri++;
      k = r;
      cout << 1 << " " << (ri % 2) + 1 << " " << ci << endl;
      fout;
      cin >> r;
      if (r == -1) return false;
      if (r > k) {
        if (n == 2) {
          flag = true;
          ans[0][0] = 0;
          ans[0][1] = 1;
          ans[1][0] = 1;
          ans[1][1] = 0;
          break;
        }
        k = r;
        cout << 1 << " " << 1 << " " << 1 << endl;
        fout;
        cin >> r;
        if (r == -1) return false;
        if (r < k) {
          flag = true;
          ans[0][0] = 1;
          ans[0][1] = 1;
          ans[1][0] = 1;
          ans[1][1] = 0;
          break;
        }
        k = r;
        cout << 1 << " " << 1 << " " << 1 << endl;
        fout;
        cin >> r;
        if (r == -1) return false;
      }
    }
  }
  fll(i, 2, n - 1) {
    if (ans[i - 1][0] != 0) {
      k = r;
      cout << 1 << " " << i << " " << 1 << endl;
      fout;
      cin >> r;
      if (r == -1) return false;
      ans[i - 1][0] ^= 1;
      if (r > k) {
        ans[i][0] = 1;
        ans[i][1] = 0;
      }
    }
    if (ans[i - 1][1] != 1) {
      k = r;
      cout << 1 << " " << i << " " << 2 << endl;
      fout;
      cin >> r;
      if (r == -1) return false;
      ans[i - 1][1] ^= 1;
      if (r > k) {
        ans[i][0] = 1;
        ans[i][1] = 0;
      }
    }
    if (ans[i][0] != -1) continue;
    ll cj = 0;
    fll(j, 0, 3) {
      k = r;
      cout << 1 << " " << i + 1 << " " << (cj % 2) + 1 << endl;
      fout;
      cin >> r;
      if (r == -1) return false;
      if (r > k) {
        k = r;
        cout << 1 << " " << i << " " << 1 << endl;
        fout;
        cin >> r;
        ans[i - 1][0] ^= 1;
        if (r == -1) return false;
        if (r < k) {
          ans[i][0] = 1;
          ans[i][1] = 0;
          break;
        }
        k = r;
        cout << 1 << " " << i << " " << 1 << endl;
        fout;
        cin >> r;
        ans[i - 1][0] ^= 1;
        if (r == -1) return false;
      }
      cj++;
    }
  }
  fll(i, 2, n - 1) {
    if (ans[0][i - 1] != 0) {
      k = r;
      cout << 1 << " " << 1 << " " << i << endl;
      fout;
      cin >> r;
      if (r == -1) return false;
      ans[0][i - 1] ^= 1;
      if (r > k) {
        ans[0][i] = 1;
        ans[1][i] = 0;
      }
    }
    if (ans[1][i - 1] != 1) {
      k = r;
      cout << 1 << " " << 2 << " " << i << endl;
      fout;
      cin >> r;
      if (r == -1) return false;
      ans[1][i - 1] ^= 1;
      if (r > k) {
        ans[0][i] = 1;
        ans[1][i] = 0;
      }
    }
    if (ans[0][i] != -1) continue;
    ll rj = 0;
    fll(j, 0, 3) {
      k = r;
      cout << 1 << " " << (rj % 2) + 1 << " " << i + 1 << endl;
      fout;
      cin >> r;
      if (r == -1) return false;
      if (r > k) {
        k = r;
        cout << 1 << " " << 1 << " " << i << endl;
        fout;
        cin >> r;
        ans[0][i - 1] ^= 1;
        if (r == -1) return false;
        if (r < k) {
          ans[0][i] = 1;
          ans[1][i] = 0;
          break;
        }
        k = r;
        cout << 1 << " " << 1 << " " << i << endl;
        fout;
        cin >> r;
        if (r == -1) return false;
        ans[0][i - 1] ^= 1;
      }
      rj++;
    }
  }
  fll(i, 2, n - 1) {
    fll(j, 2, n - 1) {
      if (ans[i - 1][j - 1] != 0) {
        k = r;
        cout << 1 << " " << i << " " << j << endl;
        fout;
        cin >> r;
        if (r == -1) return false;
        ans[i - 1][j - 1] ^= 1;
      }
      if (ans[i - 1][j] != 1) {
        k = r;
        cout << 1 << " " << i << " " << j + 1 << endl;
        fout;
        cin >> r;
        if (r == -1) return false;
        ans[i - 1][j] ^= 1;
      }
      if (ans[i][j - 1] != 1) {
        k = r;
        cout << 1 << " " << i + 1 << " " << j << endl;
        fout;
        cin >> r;
        if (r == -1) return false;
        ans[i][j - 1] ^= 1;
      }

      k = r;
      cout << 1 << " " << i + 1 << " " << j + 1 << endl;
      fout;
      cin >> r;
      if (r == -1) return false;
      if (r > k) {
        ans[i][j] = 0;
      } else {
        ans[i][j] = 1;
      }
    }
  }
  cout << 2 << endl;
  fll(i, 0, n - 1) {
    fll(j, 0, n - 1) { cout << ans[i][j] << " "; }
    cout << endl;
  }
  fout;
  cin >> r;
  if (r == -1) return false;
  return true;
}

int32_t main() {
  lage_rho();
  ll t = 1;
  cin >> t;
  fll(i, 1, t) if (!solve(i)) break;
  return 0;
}