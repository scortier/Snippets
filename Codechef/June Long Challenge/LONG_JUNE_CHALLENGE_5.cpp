// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    long long int tt;cin>>tt;while(tt--)
#define rep(i,a,b)      for(long long int i=a;i<b;i++)
#define rev(i,a,b)      for(long long int i=b-1;i>=a;i--)
#define reep(i,a,b)     for(long long int i=a;i<=b;i++)
#define ll 			    long long int
#define pb 			    push_back
#define mp 			    make_pair
#define fi 			    first
#define se 			    second
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vec(vct) 	    vector < ll > vct
#define vecpi(vct) 	    vector < pair < ll, ll > > vct
#define pi 			    pair < ll , ll >
#define lower(str) 		transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) 		transform(str.begin(), str.end(), str.begin(), ::toupper);
#define mk(arr,n,type)  type *arr=new type[n];
const int maxm = 2e6 + 10;

void fast() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/

// int32_t main()
// {
// 	fast();
// 	int x = 1;
// 	test
// 	{
// 		int n; cin >> n;
// 		int a[n][n];
// 		for (int i = 1; i <= n - 1; i + 2)
// 		{
// 			reep(j, 1, n)
// 			{
// 				a[i][j] = x;
// 				x += 1;
// 			}

// 		}
// 		for (int i = 2; i <= n - 2; i + 2)
// 		{
// 			reep(j, 1, n)
// 			{
// 				a[i][j] = x;
// 				x += 1;
// 			}

// 		}
// 		reep(i, 1, n)
// 		{
// 			reep(j, 1, n)
// 			{
// 				cout << a[i][j];

// 			}
// 			cout << endl << " ";
// 		}
// 	}
// 	return 0;
// }

// int32_t main()
// {
// 	fast();
// 	int x = 1, j;
// 	test
// 	{
// 		int n; cin >> n;
// 		int a[n][n];
// 		for (int i = 1; i <= n; i ++)
// 		{	if (j == 0)
// 			{
// 				reep(j, 1, n)
// 				{
// 					a[i][j] = x;
// 					x += 1;
// 				}
// 			}
// 			else if (j == n)
// 			{
// 				for (int j = n - 1; j >= 0; j--)
// 				{
// 					a[i][j] = x;
// 					x += 1;
// 				}
// 			}
// 			j == 0;

// 		}
// 		reep(i, 1, n)
// 		{
// 			reep(j, 1, n)
// 			{
// 				cout << a[i][j] << " ";

// 			}
// 			cout << endl ;
// 		}

// 	}
// 	return 0;
// }

void solve()
{
	ll n;
	cin >> n;
	ll k = 1;
	ll a[n][n] = {0};
	ll j = 0;
	rep(i, 0, n)
	{
		if (j == 0) {

			while (j < n)
			{
				a[i][j] = k++;

				j++;
			}
			j--;
		}
		else if (j == n - 1) {
			while (j >= 0)
			{
				a[i][j] = k++;

				j--;
			}
			j++;
		}
	}

	rep(i, 0, n)
	{
		rep(k, 0, n)
		cout << a[i][k] << " ";
		cout << endl;
	}


}

int32_t main()
{
	fast();
	ll t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}