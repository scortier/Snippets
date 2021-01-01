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
int getSum(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}

void solve()
{
	int q;
	int n; cin >> n >> q;
	int a[n + 1];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	while (q--)
	{
		int x, y, j; cin >> x;
		y = x; j = y + 1;
		if (j == n + 1) cout << -1 << endl;
		else {
			while (y <= n  and j <= n)
			{
				if (a[y]<a[j] and getSum(a[y])>getSum(a[j]) )
				{	cout << j << endl;
					break;
				}
				else if (j == n + 1)  cout << -1 << endl;
				j++;

			}
		}
	}
}

int32_t main()
{
	lage_rho();
	// test
	solve();
	return 0;
}