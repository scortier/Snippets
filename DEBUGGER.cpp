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

struct testcase {
	int a, n, d;
};
int randomNumber(int a, int b) { return a + (rand() % b); }
testcase generateTestCase() {
	testcase randomTest;
	randomTest.a = randomNumber(1, 100000);
	randomTest.n = randomNumber(1, 100000);
	randomTest.d = randomNumber(-100000, 100000);
}
int bruteForce(testcase T) {
	int ret;
	// Brute
	return ret;
}
int optimizedSolution(testcase T) {
	int ret;
	// Kartik Bhaiya
	return ret;
}

void debugger() {
	testcase random = generateTestCase();
	int ans1 = bruteForce(random);
	int ans2 = optimizedSolution(random);
	if (ans1 != ans2) {
		cout << random.a;
		return;
	}
}

void solve() {}

int32_t main() {
	lage_rho();
	test solve();
	return 0;
}



int calculate(string s) {
	stack<int> st;
	char sign = '+';
	int res = 0, curr_no = 0;
	for (unsigned int i = 0; i < s.size(); i++) {
		if (isdigit(s[i]))
			curr_no = 10 * curr_no + s[i] - '0';
		if (!isdigit(s[i]) && !isspace(s[i]) || i == s.size() - 1) {
			if (sign == '-')
				st.push(-curr_no);
			else if (sign == '+')
				st.push(curr_no);
			else {
				int num;
				if (sign == '*' )
					num = st.top() * curr_no;
				else
					num = st.top() / curr_no;
				st.pop();
				st.push(num);
			}
			sign = s[i];
			curr_no = 0;
		}
	}
	while (!st.empty()) {
		res += st.top();
		st.pop();
	}
	return res;
}