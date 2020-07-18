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

ll ar[200001] , br[200001];
void solve()
{
	int t , n , k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		reep(i , 1, n) cin >> ar[i];
		reep(i , 1	, k) cin >> br[i];

		sort(ar + 1 , ar + n + 1);
		sort(br + 1 , br + k + 1);

		ll res = 0;
		int i = 1;
		int j = n;
		int p = 1;

		while (p <= k && br[p] == 1)
			res += 2 * ar[j] , j-- , p++;

		for (int q = k; q >= p; q--)
		{
			res += ar[j] + ar[i];
			j-- , i++ , br[q] -= 2;

			while (br[q] > 0)
				i++ , br[q]--;
		}

		cout << res << endl;
	}
}

int32_t main()
{
	lag_gae();
	// test
	solve();
	return 0;
}