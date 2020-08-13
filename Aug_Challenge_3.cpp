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

void lage_rho() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********=============########################============***********/


// void solve()
// {
// 	int a, b; cin >> a >> b;
// 	int x, y = 0;

// 	for (int i = 9; i >= 0; i--)
// 	{
// 		if (a % i == 0) {x = (a / i); break; pr(x);}
// 		if (b % i == 0) {y = (b / i); break; pr(y);}
// 	}
// 	if (x > y or x == y) cout << 1 << " " << y << endl;
// 	else if (x < y)cout << 0 << " " << x << endl;

// }


void solve()
{
	ll c, r;
	cin >> c >> r;
	ll cc = 0, cr = 0;
	cc = c / 9;
	c = c % 9;
	if (c > 0)
		cc++;

	cr = r / 9;
	r = r % 9;
	if (r > 0)
		cr++;

	if (cc >= cr)
		cout << 1 << " " << cr << endl;
	else
		cout << 0 << " " << cc << endl;
}
int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}