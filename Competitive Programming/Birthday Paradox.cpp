/*
 Birthday Paradox is generally discussed with hashing to show importance of
 collision handling even for a small set of keys.
*/


#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    int tt;cin>>tt;while(tt--)
#define fl(i,a,b)       for( int i=a;i<b;i++)
#define ll 			    long long int
#define pb 			    push_back
#define mp 			    make_pair
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define pr(gg)          cout<<gg<<endl
#define mk(arr,n,type)  type *arr=new type[n];


void lage_rho() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********============########################============***********/

int find(double p)
{
	return ceil(sqrt(2 * 365 * log(1 / (1 - p))));//log repr base e
}

void solve()
{

	double p;
	cin >> p;
	cout << find(p);


}

int32_t main()
{
	lage_rho();
	solve();
	return 0;
}