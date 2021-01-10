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

int gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(a, a % b);
}

ll lcm_bc(ll a[], ll n)
{
	// Initialize result
	ll ans = a[0];

	// ans contains LCM of arr[0], ..arr[i]
	// after i'th iteration,
	for (int i = 1; i < n; i++)
		ans = (((a[i] * ans)) /
		       (gcd(a[i], ans)));

	return ans;
}
void solve()
{
	ll n, m, k; cin >> n >> m >> k;
	ll a[n];
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, n) a[i] = pow(a[i], k);
	// rep(i, 0, n) pr(b[i]);
	ll y = lcm_bc(a, n);
	// pr(y);
	ll z = y % m;
	pr(z);

}

int32_t main()
{
	lag_gae();
	test
	solve();
	return 0;
}