// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    int tt;cin>>tt;while(tt--)
#define rep(i,a,b)      for( int i=a;i<b;i++)
#define rev(i,a,b)      for( int i=b-1;i>=a;i--)
#define reep(i,a,b)     for( int i=a;i<=b;i++)
#define ll 			    long long int
#define pb 			    push_back
#define mp 			    make_pair
#define f 			    first
#define s 			    second
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vi   		    vector < int >
#define pi 			    pair < int , int >
#define pr(gg)          cout<<gg<<endl
#define mk(arr,n,type)  type *arr=new type[n];
const int maxm = 2e6 + 10;

void lag_gae() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/


void solve()
{
	int n; cin >> n;
	// int x = 0, y = 0;
	// reep(i, 1, n)
	// {
	// 	for (int j = i + 1; j <= n; j++)
	// 	{
	// 		y = __gcd(i, j);
	// 		if (x <= y)
	// 		{
	// 			x = y;
	// 		}
	// 	}
	// }
	// pr(x);

	int g = gcd(a, b);
	int res = -1;

	// Loop from 1 to sqrt(GCD(a, b).
	for (int i = l; i * i <= g && i <= h; i++)

		// if i divides the GCD(a, b), then
		// find maximum of three numbers res,
		// i and g/i
		if (g % i == 0)
			res = max({res, i, g / i});

	return res;


}

int32_t main()
{
	lag_gae();
	test
	solve();
	return 0;
}