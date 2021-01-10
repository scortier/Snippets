// QUARANTINE DAYS..;)
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
#define vi   		    vector < int >
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
	ll n, k, z;
	cin >> n >> k >> z;
	vi a(n);
	fl(i, 0, n)
	cin >> a[i];

	bool left = false;
	ll i = 1;
	ll sum = a[0];
	ll j = max_element(a.begin(), a.begin() + k) - a.begin();

	while (i < n && k)
	{

		sum += a[i];
		k--;

		if (i + 1 < n && a[i + 1] < a[i - 1]  && i - 1 == j)
		{
			i--;
			z--;
			left = true;
		}
		else {
			i++;
			left = false;
		}
	}

	cout << sum << endl;

}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}