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

void solve()
{
	ll ts, js, x;
	cin >> ts;
	if (ts % 2 != 0)
	{
		cout << (ts - 1) / 2 << endl;
	} else {
		if (ceil(log2(ts)) == floor(log2(ts)))
		{
			cout << 0 << endl;
			return;
		}


		ll coun = 0;
		x = ts;
		while (x % 2 == 0)
		{
			x /= 2;
			coun++;
		}
		coun++;
		ll y = pow(2, coun);
		cout << ts / y << endl;

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