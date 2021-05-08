// Problem: Destroy the EMP Chip
// Contest: CodeChef - April Challenge 2021 Division 2
// URL: https://www.codechef.com/APRIL21B/problems/CHAOSEMP
// Memoright_y Limit: 256 MB
// Time Limit: 2000 ms

// Handle: Scortier (Aditya Singh Sisodiya)
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define test \
  int tt;    \
  cin >> tt; \
  while (tt--)
#define ll long long int
#define fl(i, a, b) for (ll i = a; i < b; i++)
#define bfl(i, a, b) for (ll i = b - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define MOD 1000000007
// const max = 2e18;
// #define 1LL 1LL
#define PI acos(-1.0)
#define assign(x, val) memset(x, val, sizeof(x))
#define prec(val, dig) fixed << setprecision(dig) << val
#define pi pair<ll, ll>
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
Meri Zameen tumse Gehri hai,
Dekhna Asmaan tumse Ucha hoga.
*/
/*
void solve() {
  ll testt, q, d;
  cin >> testt >> q >> d;
  while (testt--)
  {
    ll start = -2e18, end = 2e18;
    ll w = start, ee = end;
    ll pre = 1LL     string ans;
    ll mid = start + end / 2;

    while (start <= end)
    {
      ll mid = start + end / 2;
      if (pre == 1LL)
        cout << pre << " " << mid << " " << w << endl;
      else
        cout << pre << " " << mid << " " << w << " " << mid << " " << ee <<
endl; cin >> ans; if (ans[0] == 'X') pre = 2LL; if (ans == "O") break; if
(ans[0] == 'N') start = mid + 1LL; if (ans[0] == 'P') end = mid - 1LL;
    }
  }
}
*/
int main() {
  scortier();
  ll t, q, d;
  cin >> t >> q >> d;
  while (t--)
  {
    ll left_x = (-1ll) * 1e18, right_x = 1e18, left_y = left_x,
       right_y = right_x;
    left_x--;
    right_x++;
    left_y--;
    right_y++;
    ll present = 1;
    string ans;
    ll z = -1;
    while (true)
    {
      if (present == 1)
      {
        if (right_x >= (left_x + 2) and right_y >= (left_y + 2))
        {
          ll midx = (right_x + left_x) / 2;
          ll midy = (right_y + left_y) / 2;
          cout << present << " " << midx << " " << midy << endl;
          cin >> ans;
          if (ans.compare("O") == 0 or ans.compare("FAILED") == 0)
            break;
          if (ans[0] == 'X')
          {
            left_x = midx - 1;
            right_x = midx + 1;
          }
          else if (ans[0] == 'P')
          {
            if (d == 0)
            {
              right_x = midx - 1;
            }
            else
            {
              right_x = midx ;
              left_x--;
            }
          }
          else
          {
            if (d == 0)
              left_x = midx + 1;
            else
            {
              left_x = midx;
              right_x++;
            }
          }
          if (ans[1] == 'Y')
          {
            left_y = midy - 1;
            right_y = midy + 1;
          }
          else if (ans[1] == 'P')
          {
            if (d == 0) {
              right_y = midy - 1;
            }
            else
            {
              right_y = midy;
              left_y--;
            }
          }
          else
          {
            if (d == 0)
            {
              left_y = midy + 1;
            } else
            {
              left_y = midy;
              right_y++;
            }
          }
          if (d == 0)
          {
          }
          else
          {
            if (right_x <= (left_x + 3) && right_y <= (left_y + 3))
              present = 2;
          }
        }
        else
        {
          present = 2;
          cout << present << " " << left_x << " " << left_y << " " << right_x
               << " " << right_y << endl;
          cin >> ans;
          break;
        }
      }
      else
      {
        if ((right_x == (left_x + 3)) and (right_y == (left_y + 3))) {
          cout << present << " " << left_x << " " << left_y << " " << left_x + 2
               << " " << right_y << endl;

          cin >> ans;
          if (ans.compare("O") == 0) {
            break;
          } else if (ans.compare("IN") == 0) {
            // cout << present << " " << left_x << " " << left_y << " " <<
            // right_x << " " << left_y + 2 << endl; cin >> ans;
            right_x = left_x + 2;
          }
          else
          {
            left_x = left_x + 2;
            right_x++;
            // cout << present << " " << left_x << " " << left_y + 2 << " " <<
            // right_x << " " << left_y + 4 << endl; cin >> ans;
          }
          // break;
        }
        if (right_x == (left_x + 2) and (right_y == (left_y + 3))) {
          cout << present << " " << left_x << " " << left_y << " " << right_x
               << " " << left_y + 2 << endl;

          cin >> ans;
          if (ans.compare("O") == 0)
          {
          }
          else if (ans.compare("IN") == 0)
          {
            cout << present << " " << left_x << " " << left_y << " " << right_x
                 << " " << left_y + 2 << endl;
            cin >> ans;
          }
          else
          {
            cout << present << " " << left_x << " " << left_y + 2 << " "
                 << right_x << " " << left_y + 4 << endl;
            cin >> ans;
          }
          break;
        }
        if ((right_x == (left_x + 3)) && ((right_y == (left_y + 2))))
        {
          cout << present << " " << left_x << " " << left_y << " " << left_x + 2
               << " " << right_y << endl;
          cin >> ans;
          if (ans.compare("O") == 0)
          {
          }
          else if (ans.compare("IN") == 0)
          {
            cout << present << " " << left_x << " " << left_y << " "
                 << left_x + 2 << " " << right_y << endl;
            cin >> ans;
          }
          else
          {
            cout << present << " " << left_x + 2 << " " << left_y << " "
                 << left_x + 4 << " " << right_y << endl;
            cin >> ans;
            // break;
          }
          break;
          // cout.flush();
        } else {
          cout << present << " " << left_x << " " << left_y << " " << right_x
               << " " << right_y << endl;
          cin >> ans;
          break;
        }
      }
      cout.flush();
    }
    cout.flush();
  }
  return 0;
}
