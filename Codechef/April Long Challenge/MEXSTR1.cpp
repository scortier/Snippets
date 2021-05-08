// Problem: Binary String MEX
// Contest: CodeChef - April Chalsizege 2021 Division 2
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

int t[MAX], temp_arr[MAX], bin_ZERO[MAX], bin_ONE[MAX];

void solution() {
  string s;
  cin >> s;
  int n = s.size();
  string result = "1";

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

  fl(i, end_position + 1, n) { bin_ONE[i] = n; }
  t[n] = t[n + 1] = 0;
  temp_arr[n] = temp_arr[n + 1] = 0;
  bfl(i, 0, n) {
    t[i] = t[i + 1];

    if (s[i] == '0' && bin_ONE[i] < n) {
      t[i] = max(t[i], t[bin_ONE[i] + 1] + 1);
    } else if (s[i] == '1' && bin_ZERO[i] < n) {
      t[i] = max(t[i], t[bin_ZERO[i] + 1] + 1);
    }
    temp_arr[i] = temp_arr[i + 1];
    if (bin_ONE[i] < n) {
      temp_arr[i] = max(temp_arr[i], t[bin_ONE[i] + 1] + 1);
    }
  }

  int size = temp_arr[0] + 1;
  int curr_no = bin_ONE[0] + 1;

  fl(i, 1, size) {
    if (curr_no >= n) {
      result.pb('0');
      continue;
    }

    if (bin_ZERO[curr_no] >= n) {
      result.pb('0');
      curr_no = bin_ZERO[curr_no] + 1;
      continue;
    }

    if (t[bin_ZERO[curr_no] + 1] < size - i - 1) {
      result.pb('0');
      curr_no = bin_ZERO[curr_no] + 1;
    } else {
      result.pb('1');
      curr_no = bin_ONE[curr_no] + 1;
    }
  }
  pr(result);
}

int32_t main() {
  scortier();
  test solution();
  return 0;
}