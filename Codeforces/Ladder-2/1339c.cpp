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
ll np2(ll diff) {
	if (diff == 0) {
		return 0;
	}
	ll x = log2(diff);
	x++;
	return x;
}

void solve()
{
	ll n;
	cin >> n;
	vector<ll> a(n);
	ll diff = 0, mx = 0;
	rep(i, 0, n) {
		cin >> a[i];
		if (i == 0) {
			mx = a[i];
		} else {
			if (mx > a[i]) {
				diff = max(diff, mx - a[i]);
			} else {
				mx = a[i];
			}
		}
	}
	// cout<<diff<<"--";
	cout << np2(diff) << endl;


}

int32_t main()
{
	lag_gae();
	test
	solve();
	return 0;
}