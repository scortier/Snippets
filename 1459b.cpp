
// Problem: B. Move and Turn
// Contest: Codeforces - Codeforces Round #691 (Div. 2)
// URL: https://codeforces.com/contest/1459/problem/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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

}
/**********=============########################============***********/


void solve()
{
	ll n, m;
	cin >> n;
	if (n % 2 == 0) {
		n /= 2;
		n = (n + 1) * (n + 1);
	}
	else {
		m = (n + 1) / 2;
		n = 2 * m * (m + 1);
	}
	cout << n << "\n";

}

int32_t main()
{
	lage_rho();
	//test
	solve();
	return 0;
}