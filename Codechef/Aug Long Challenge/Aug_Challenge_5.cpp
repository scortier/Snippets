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


ll chefWedding(ll arr[], ll n, ll k) {
	map<ll, ll> mp;
	ll col[n + 1][n + 1] = {0};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			col[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		mp.clear();
		for (int j = i; j < n; j++) {
			col[i][j] = (j == 0) ? 0 : col[i][j - 1];
			if (mp.count(arr[j])) {
				if (mp[arr[j]] == 1) {
					col[i][j]++;
				}
				col[i][j]++;
			}
			mp[arr[j]]++;
		}
	}

	ll ans = 1e18;
	ll table = 100;
	ll dp[101][1001] = {0};

	for (int i = 0; i <= table; i++) {
		for (int j = 0; j <= n; j++) {
			dp[i][j] = 0;
		}
	}

	for (int i = 1; i < n + 1; i++) {
		dp[1][i] = col[0][i - 1];
	}
	for (int i = 1; i <= table; i++) {
		dp[i][1] = 0;
	}

	for (int i = 2; i <= table; i++) {
		for (int j = 2; j <= n; j++) {
			ll best = 1e18;
			for (int p = 1; p < j; p++) {
				best = min(best, dp[i - 1][p] + col[p][j - 1]);
			}
			dp[i][j] = best;
		}
	}

	for (table = 1; table <= 100; table++) {
		ans = min(table * k + dp[table][n], ans);
	}

	return ans;
}


void solve()
{
	ll n, k;
	cin >> n >> k;
	ll arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << chefWedding(arr, n, k) << endl;

}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}