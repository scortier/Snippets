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
	ll n;
	cin >> n;
	ll cn = 0;
	while (n > 1)
	{	ll flag = 0;
		if (n % 2 != 0)
		{
			cn++;
			n /= n;
			continue;
		}
		for (ll i = 2; i * i <= n; i++)
		{
			if (n % i == 0)
			{	ll a = n / i;
				if (i % 2 != 0)
					flag = max(flag, i);
				if (a % 2 != 0)
					flag = max(flag, a);

			}
		}
		cout << flag << " ";
		if (flag != 0)
		{
			n /= flag;
			cn++;
		}
		else if (n % 2 != 0)
		{
			n /= n;
			cn++;
		} else if (n > 1)
		{
			n -= 1;
			cn++;
		} else
		{
			break;
		}
	}
	if (cn % 2 == 0)
		cout << "FastestFinger" << endl;
	else
		cout << "Ashishgup" << endl;
}
int32_t main()
{
	lag_gae();
	test
	solve();
	return 0;
}
