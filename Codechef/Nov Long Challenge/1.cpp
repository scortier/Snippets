#include<bits/stdc++.h>

using namespace std;

#define ll             long long
#define ff              first
#define ss              second
#define fl(i,a,b)       for(ll i=a; i<b; i++)
#define bfl(i,a,b)      for(ll i=a-1; i>=b; i--)
#define pb              push_back
#define mp              make_pair
#define pii             pair<ll,ll>
#define vi              vector<int>
#define vt(type)        vector<type>
#define noobething     ios_base::sync_with_stdio(false);   cin.tie(NULL); cout.tie(NULL);
#define mii             map<int,int>
#define pq             priority_queue<int>
#define bits(n)         __builtin_popcountll(n)
#define pi             3.14159265358979323846
#define all(v)          (v).begin(),(v).end()
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)


void lage_rho() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********=============########################============***********/

void solve()
{
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	int sum = 0, t = 0;
	if (n == 1)
		sum = v[0];
	else
	{
		int a = 0, b = 0, i = 0;
		while (i < n)
		{
			if (a == 0 && b == 0 )
			{
				if (i + 1 < n)
				{
					a = v[i];
					b = v[i + 1];
					t = min(a, b);
					a -= t;
					b -= t;
					i += 2;
				}
				else
				{
					t = v[i++];
				}
			}
			else if (a == 0 || b == 0)
			{
				if (a == 0)
					a = v[i++];
				else
					b = v[i++];
				t = min(a, b);
				a -= t;
				b -= t;
			}
			sum += t;
		}
		sum += a + b;
	}
	cout << sum << endl;

}
int main()
{
	lage_rho();
	ll t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}