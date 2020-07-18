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
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sortall(x) sort(x.begin(), x.end())
const int maxm = 2e6 + 10;

void lag_gae() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
const int N = 3e5, M = N;
/**********====================########################=================***********/
1. remove the common elements from both the array
2.

bool iseven(int n)
{
	return (n % 2 == 0);
}

bool isodd(int n)
{
	return (n % 2 == 1);
}

vi g[N];
int a[N];


void solve() {
	int i, j, n, m;
	cin >> n;
	int a[n];
	rep(i, 0, n) cin >> a[i];
	int b[n];
	rep(i, 0, n) cin >> b[i];
	map<int, int> mp;
	rep(i, 0, n)
	{
		mp[a[i]] += 1;
		mp[b[i]] += 1;
	}
	bool anss = true;
	tr(it, mp)
	{
		if (isodd((*it).second)) anss = false;
	}
	if (!anss) cout << -1 << endl;
	else
	{
		map<int, int> x;
		map<int, int> y;
		rep(i, 0, n) x[a[i]] += 1;
		rep(i, 0, n) y[b[i]] += 1;
		vi swaps;
		ll count = 0;
		for (auto && i : x)
		{
			if (i.second > y[i.first])
			{
				rep(j, 0, abs(i.second - y[i.first]) / 2)
				{
					swaps.pb(i.first);
					count += 1;
				}
			}
		}
		for (auto && i : y)
		{
			if (i.second > x[i.first])
			{
				rep(j, 0, abs(i.second - x[i.first]) / 2)
				{
					swaps.pb(i.first);
					count += 1;
				}
			}
		}
		sortall(swaps);
		ll ans = 0;
		ll s = swaps.size();
		ll ans2 = 0;
		auto it = mp.begin();
		int minel = (*it).first;
		ll counts = 0;
		rep(i, 0, s / 2)
		{
			if (swaps[i] < 2 * minel)
			{
				ans += swaps[i];
				counts += 1;
			}
		}
		ans += (s - 2 * counts) * minel;
		cout << ans << endl;


	}


}


int main() {
	lag_gae();

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
