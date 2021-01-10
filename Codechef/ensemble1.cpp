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



void solve()
{	int n; cin >> n;
	int a[n]; int cnt = 0;
	for (int i = 0; i < n; i++) cin >> a[i];
	fl(i, 0, n)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i]^a[j] == a[i]) cnt++;
		}
	}

	pr(cnt);
}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}