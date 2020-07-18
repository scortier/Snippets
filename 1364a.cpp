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

void solve()
{
	ll n, x;
	ll   ans = -1;
	cin >> n >> x;
	vec v(n);
	ll sum = 0;
	rep(i, 0, n)
	{
		cin >> v[i];
		sum += v[i];
		if (sum % x != 0)
			ans = max(ans, (ll)i + 1);

	}
	sum = 0;
	for (ll i = n - 1; i >= 0; i--)
	{
		sum += v[i];
		if (sum % x != 0)
			ans = max(ans, n - i);
	}
	if (ans == 0)
		cout << -1 << endl;
	else
		cout << ans << endl;

}
int main()
{
	fast();
	ll t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}