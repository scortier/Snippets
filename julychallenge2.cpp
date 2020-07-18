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

int fcuk(int n)
{
	ll sum = 0;
	while (n > 0)
	{
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}
void solve()
{
	ll n;
	cin >> n;
	ll a, b, suma = 0, sumb = 0;
	while (n--)
	{
		cin >> a >> b;
		if (fcuk(a) > fcuk(b))
			suma++;
		else if (fcuk(a) < fcuk(b))
			sumb++;
		else
		{
			suma++;
			sumb++;
		}
	}
	if (suma > sumb)
		cout << 0 << " " << suma << endl;
	else if (suma < sumb)
		cout << 1 << " " << sumb << endl;
	else
	{
		cout << 2 << " " << suma << endl;
	}

}
int main()
{
	lag_gae();
	ll t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}