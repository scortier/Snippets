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


void solve()
{

	int n; cin >> n; float cnt = 0; float x = 0;
	string a;
	cin >> a;
	x = 120 - n;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == '1') cnt++;

	}
	float d = (x + cnt) / 120;
	if (d >= 0.75 ) cout << "YES" << endl;
	else cout << "NO" << endl;

}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}