#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    int tt;cin>>tt;while(tt--)
#define fl(i,a,b)       for( int i=a;i<b;i++)
#define bfl(i,a,b)      for( int i=b-1;i>=a;i--)
#define ll 			    long long int
#define pb 			    push_back
#define mp 			    make_pair
#define f 			    first
#define s 			    second
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define pi 			    pair < int , int >
#define pr(gg)          cout<<gg<<endl
#define mk(arr,n,type)  type *arr=new type[n];

void lage_rho() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********=============########################============***********/


void solve(	)
{
	ll n, m;
	cin >> n >> m;
	string s;
	ll arr[n][m];
	ll ans = 0;
	for (ll i = 0; i < n; i++)
	{
		cin >> s;
		for (ll j = 0; j < m; j++)
		{
			arr[i][j] = (s[j] - '0');
			if (arr[i][j])
				ans++;
		}
	}
	cout << ans * 3 << endl;
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			if (arr[i][j])
			{
				if (i == n - 1 && j == m - 1)
				{

					cout << i + 1 << " " << j + 1 << " " << i - 1 + 1 << " " << j + 1 << " " << i + 1 << " " << j - 1 + 1 << endl;
					cout << i + 1 << " " << j + 1 << " " << i - 1 + 1 << " " << j + 1 << " " << i - 1 + 1 << " " << j - 1 + 1 << endl;
					cout << i + 1 << " " << j + 1 << " " << i - 1 + 1 << " " << j - 1 + 1 << " " << i + 1 << " " << j - 1 + 1 << endl;
				}
				else if (i == n - 1)
				{

					cout << i + 1 << " " << j + 1 << " " << i - 1 + 1 << " " << j + 1 << " " << i + 1 << " " << j + 1 + 1 << endl;
					cout << i + 1 << " " << j + 1 << " " << i - 1 + 1 << " " << j + 1 << " " << i - 1 + 1 << " " << j + 1 + 1 << endl;
					cout << i + 1 << " " << j + 1 << " " << i - 1 + 1 << " " << j + 1 + 1 << " " << i + 1 << " " << j + 1 + 1 << endl;
				}
				else if (j == m - 1)
				{

					cout << i + 1 << " " << j + 1 << " " << i + 1 + 1 << " " << j + 1 << " " << i + 1 << " " << j - 1 + 1 << endl;
					cout << i + 1 << " " << j + 1 << " " << i + 1 + 1 << " " << j + 1 << " " << i + 1 + 1 << " " << j - 1 + 1 << endl;
					cout << i + 1 << " " << j + 1 << " " << i + 1 + 1 << " " << j - 1 + 1 << " " << i + 1 << " " << j - 1 + 1 << endl;
				}
				else
				{

					cout << i + 1 << " " << j + 1 << " " << i + 1 + 1 << " " << j + 1 << " " << i + 1 << " " << j + 1 + 1 << endl;
					cout << i + 1 << " " << j + 1 << " " << i + 1 + 1 << " " << j + 1 << " " << i + 1 + 1 << " " << j + 1 + 1 << endl;
					cout << i + 1 << " " << j + 1 << " " << i + 1 + 1 << " " << j + 1 + 1 << " " << i + 1 << " " << j + 1 + 1 << endl;

				}
			}
		}
	}

}


int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}