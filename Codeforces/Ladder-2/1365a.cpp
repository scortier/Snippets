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
#define bits(n)         __builtin_popcountll(n)
#define pi             3.14159265358979323846




void solve()
{
	ll n, m, x;
	cin >> n >> m;
	vi r, c;
	r.resize(n);
	c.resize(m);
	fl(i, 0, n)
	{
		fl(j, 0, m)
		{
			cin >> x;
			if (x == 1)
			{	r[i] = 1;
				c[j] = 1;
			}
		}
	}
	ll coun = 0;
	fl(i, 0, n)
	{	ll flag = -1;
		if (r[i] == 0) {

			fl(j, 0, m)
			{
				if (c[j] == 0)
				{
					flag = j;
					break;
				}
			}
		}
		if (flag != -1)
		{
			coun++;
			r[i] = 1;
			c[flag] = 1;
		}

	}
	if (coun % 2 == 0)
		cout << "Vivek\n";
	else
		cout << "Ashish\n";
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