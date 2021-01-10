#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

using namespace std;
using namespace __gnu_pbds;//which means policy based DS

#define ll             long long
#define ff              first
#define ss              second
#define fl(i,a,b)       for(int i=a; i<b; i++)
#define bfl(i,a,b)      for(int i=a-1; i>=b; i--)
#define pb              push_back
#define mp              make_pair
#define pii             pair<ll,ll>
#define vi              vector<ll>
#define vt(type)        vector<type>
#define noobething     ios_base::sync_with_stdio(false);   cin.tie(NULL); cout.tie(NULL);
#define mii             map<int,int>
#define pq             priority_queue<int>
#define bits(n)         __builtin_popcount(n)
#define pi             3.14159265358979323846
void solve()
{
	ll a, b;
	cin >> a >> b;
	ll coun = 0;
	if (b == a)
	{
		cout << 0 << endl;
		return;
	} else if (b > a)
	{
		while (a < b)
		{
			if (8 * a <= b)
			{
				a = 8 * a;
				coun++;
			} else if (4 * a <= b)
			{
				a = 4 * a;
				coun++;
			} else if (2 * a <= b)
			{
				a = 2 * a;
				coun++;
			} else
				break;
		}

	} else if (a > b)
	{
		while (a > b)
		{
			if (a % 8 == 0 && a / 8 >= b)
			{
				a = a / 8;
				coun++;
			} else if (a % 4 == 0 && a / 4 >= b)
			{
				a = a / 4;
				coun++;
			} else if (a % 2 == 0 && a / 2 >= b)
			{
				a = a / 2;
				coun++;
			} else
				break;
		}

	}
	if (a == b)
		cout << coun << endl;
	else
		cout << -1 << endl;
}

int main()
{
	noobething
	ll t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}