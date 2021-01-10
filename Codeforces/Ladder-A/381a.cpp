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
// 	int n; cin >> n;
// 	int a[n];
// 	for (int i = 0; i < n; i++) cin >> a[i];
// 	sort(a, a + n);
// 	int sum = 0, s = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (i & 1) sum += a[i];
// 		else {s += a[i];}
// 	}
// 	cout << sum << " " << s << endl;

// }

void solve()
{
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int i = 0, j = n - 1, s = 0, sum = 0;
	for (int i = 0; i < n; i++)
	{	while (i <= j) {
			if (i % 2 == 0)
			{
				s += max(a[i], a[j]);
				sum += min(a[i], a[j]);
			}
			else {
				sum += max(a[i], a[j]);
				s += min(a[i], a[j]);
			}
			i++; j--;
		}
	}
	cout << s << sum << endl;
}

int32_t main()
{
	lage_rho();
	// test
	solve();
	return 0;
}