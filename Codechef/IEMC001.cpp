// QUARANTINE DAYS..;)
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
int minSwaps(int arr[], int n)
{

	pair<int, int> arrPos[n];
	for (int i = 0; i < n; i++)
	{
		arrPos[i].first = arr[i];
		arrPos[i].second = i;
	}


	sort(arrPos, arrPos + n);


	vector<bool> vis(n, false);


	int ans = 0;


	for (int i = 0; i < n; i++)
	{

		if (vis[i] || arrPos[i].second == i)
			continue;


		int cycle_size = 0;
		int j = i;
		while (!vis[j])
		{
			vis[j] = 1;


			j = arrPos[j].second;
			cycle_size++;
		}


		if (cycle_size > 0)
		{
			ans += (cycle_size - 1);
		}
	}


	return ans;
}


void solve()
{
	int n; cin >> n;
	int a[n], b[n];
	int x = 0;
	fl(i, 0, n) cin >> a[i];
	fl(i, 0, n) b[i] = a[i];
	int cnt = minSwaps(b, n);
	sort(a, a + n);
	fl(i, 0, n)
	{
		if (a[i] != b[i]) x++;
	}
	x /= 2;
	int z = (cnt * 1000) / x;
	if (z <= 2000) pr(z);
	else pr("Too Much");



}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}