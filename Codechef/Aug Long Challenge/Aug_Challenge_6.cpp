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

int power(int x, unsigned int y, int p)
{
	int res = 1;     // Initialize result

	x = x % p; // Update x if it is more than or
	// equal to p

	if (x == 0) return 0; // In case x is divisible by p;

	while (y > 0)
	{
		// If y is odd, multiply x with result
		if (y & 1)
			res = (res * x) % p;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % p;
	}
	return res;
}
static int exponentMod(int A,
                       int B, int C)
{

	// Base cases
	if (A == 0)
		return 0;
	if (B == 0)
		return 1;

	// If B is even
	long y;
	if (B % 2 == 0)
	{
		y = exponentMod(A, B / 2, C);
		y = (y * y) % C;
	}

	// If B is odd
	else
	{
		y = A % C;
		y = (y * exponentMod(A, B - 1,
		                     C) % C) % C;
	}

	return (int)((y + C) % C);
}
void solve()
{	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int i = n - 1 ;

	while (i >= 0) {
		cout  << exponentMod(2, i, MOD) << " ";
		i--;
	}
	cout << endl;

}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}