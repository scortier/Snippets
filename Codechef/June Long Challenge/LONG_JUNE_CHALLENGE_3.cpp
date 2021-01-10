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

int32_t main()
{
	fast();
	test{
		int n; cin >> n; int a[n];
		for (int i = 1; i <= n; i++) cin >> a[i];
		if (a[1] != 5) cout << "NO" << endl;
		else if (a[1] == 5)
		{
			for (int i = 2; i <= n - 1; i++)
			{
				if (a[i + 1] > a[i] && (a[i] / i) == 5)
				{cout << "YES" << endl;}
				else cout << "NO" << endl;
			}
		}
	}
	return 0;
}
// void solve()
// {
// 	ll n, x;
// 	cin >> n;
// 	ll a = 0, b = 0, c = 0;
// 	vec (v(n));
// 	rep(i, 0, n)
// 	cin >> v[i];
// 	ll flag = 0;
// 	rep(i, 0, n)
// 	{

// 		if (v[i] == 5)
// 		{
// 			a++;
// 		} else if (v[i] == 10)
// 		{
// 			if (a > 0)
// 			{
// 				a--;
// 				b++;
// 			} else
// 			{
// 				flag = 1;
// 				break;
// 			}
// 		}
// 		else if (v[i] == 15)
// 		{
// 			if (b > 0)
// 			{
// 				b--;
// 				c++;
// 			} else if (a > 1)
// 			{
// 				a -= 2;
// 				c++ ;
// 			}
// 			else {
// 				flag = 1;
// 				break;
// 			}
// 		}
// 	}
// 	if (!flag)
// 		cout << "YES\n";
// 	else
// 		cout << "NO\n";
// }

// int32_t main()
// {
// 	fast();
// 	ll t;
// 	cin >> t;
// 	while (t--)
// 		solve();

// 	return 0;
// }