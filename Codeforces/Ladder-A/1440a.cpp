#include <bits/stdc++.h>
#include <iostream>
#include <string>
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
	int n, c0, c1, h;
	cin >> n >> c0 >> c1 >> h;
	string s;
	cin >> s;
	int sum = 0, z = 0, o = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1')
			o++;
		else
			z++;
	}
	if (c0 <= h && c1 <= h)
	{
	}
	else if (c0 + h < c1)
	{
		c1 = c0 + h;
	}
	else if (c1 + h < c0)
	{
		c0 = c1 + h;
	}
	sum = z * c0 + c1 * o;
	cout << sum << endl;

}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}