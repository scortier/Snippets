// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    int tt;cin>>tt;while(tt--)
#define rep(i,a,b)      for( int i=a;i<b;i++)
#define rev(i,a,b)      for( int i=b-1;i>=a;i--)
#define reep(i,a,b)     for( int i=a;i<=b;i++)
#define ll 			    long long int
#define pb 			    push_back
#define mp 			    make_pair
#define f 			    first
#define s 			    second
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vi   		    vector < int >
#define pi 			    pair < int , int >
#define pr(gg)          cout<<gg<<endl
#define mk(arr,n,type)  type *arr=new type[n];
const int maxm = 2e6 + 10;

void lag_gae() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/




// void solve()
// {
// 	int n; cin >> n;
// 	int a[n];
// 	rep(i, 0, n) cin >> a[i];
// 	int x = 1, y = 0;
// 	rep(i, 0, n)
// 	{
// 		x *= a[i];
// 	}
// 	pr(x);
// 	while (y <= 1000)
// 	{
// 		reep(j, 1, 1000)
// 		{
// 			y = x * j;
// 			if (y % 2) break;
// 		}


// 	}
// 	if (y % 2) pr("YES");
// 	else pr("NO");

// }
void solve()
{
	ll n, x, flag = 1;
	cin >> n;
	rep(i, 0, n)
	{
		cin >> x;
		if (x % 2 == 0)
		{
			flag = 0;
		}
	}
	if (flag)
		cout << "YES\n";
	else
		cout << "NO\n";
}
int32_t main()
{
	lag_gae();
	test
	solve();
	return 0;
}