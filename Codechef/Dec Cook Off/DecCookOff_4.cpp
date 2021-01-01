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
/*
APPROACH
FOR M=1
IF(N>=P) KILL=N-P;
IF(P>N) KILL=N-(LARGEST FACTOR OF P < N)

FOR M>1
KILL=N-(LARGEST FACTOR OF GCD OF (P1,P2,...Pm) < N )
*/

int gcd(int x, int y) {
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int maxfact(int g, int n)
{
	int max_factor = 0;
	for (int i = 1; i * i <= g; i++)
	{
		if (g % i == 0)
		{
			if (i <= n)
				max_factor = max(max_factor, i);
			if (g / i <= n)
				max_factor = max(max_factor, g / i);
		}
	}
	return max_factor;
}



void solve()
{
	int n, m; cin >> n >> m;
	int a[m];
	for (int i = 0; i < m; i++) cin >> a[i];
	int x = 0;
	for (int i = 0; i < m; i++)
		x = gcd(x, a[i]);
	if (x > n)
	{
		int fact = maxfact(x, n);
		x = fact;
	}
	// cout << x;
	cout << n - x << endl;
}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}