# include <bits/stdc++.h>
using namespace std;
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n = 10, k;
	cin >> k;
	VI a{1, 2, 3, 4};
	VI b{5, 6, 7, 8};
	VI c{9, 10, 11, 12};
	int clock = 1;
	int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;
	cout << " clock" << "R1" << "R2" << "R3" << "R4" << "R5" << "\n";
	while (true)
	{
		if (clock >= 3)
		{
			R5 = R3 + R4;
			if (clock - 2 < c.size())
				R4 = c[clock - 2];
			else
			{
				R4 = 0;
			}

			R3 = R1 * R2;
			if (clock - 1 < a.size())
			{
				R1, R2 = a[clock - 1], b[clock - 1];
			}
			else
				R1 = R2 = 0;
			cout << "  " << clock << "  " << " " << R1 << " " << "  " << R2 << "  " << "  " << R3 << "  " << "  " << R4 << "  " << "  " << R5 << "  " << "\n";
		}
		else if (clock == 2)
		{
			R4 = c[clock - 2];
			R3 = R1 * R2;
			R1, R2 = a[clock - 1], b[clock - 1];
			cout << "  " << clock << "  " << " " << R1 << " " << "  " << R2 << "  " << "  " << R3 << "  " << "  " << R4 << "  " << "    " << R5 << "  " << "\n";
		}
		else
		{
			R1, R2 = a[clock - 1], b[clock - 1];
			cout << "  " << clock << "  " << " " << R1 << " " << "  " << R2 << "  " << "  " << R3 << "  " << "  " << R4 << "  " << "    " << R5 << "  " << "\n";
		}
		if (R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0)
			break;
		clock += 1;
	}

	return 0;
}

