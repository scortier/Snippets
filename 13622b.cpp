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
	ll n, x;
	cin >> n;
	set<ll>s;
	fl(i, 0, n)
	{
		cin >> x;
		s.insert(x);
	}
	ll flag = 0;
	fl(i, 1, 1025)
	{	set<ll>s1;
		for (auto j : s)
		{
			s1.insert(i ^ j);
		}
		if (s1 == s)
		{
			flag = i;
			break;
		}
	}
	if (flag)
	{
		cout << flag << endl;
	} else
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