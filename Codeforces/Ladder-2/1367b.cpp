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
#define f 			    first
#define s 			    second
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vec 		    vector < ll >
#define vecpi	 	    vector < pair < ll, ll > >
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

int main()
{
	fast();
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n;
		vec a(n);
		ll cnt = 0, ct = 0;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n ; i ++)
		{
			if (i % 2 != 0)
				continue;
			if (i % 2 != a[i] % 2)
			{
				cnt++;
			}

		}
		for (int i = 1; i < n; i++)
		{
			if (i % 2 == 0)
				continue;
			if (i % 2 != a[i] % 2)
			{
				ct++;
			}

		}
		if (ct == cnt) cout << cnt << endl;
		else cout << -1 << endl;
	}

	return 0;
}