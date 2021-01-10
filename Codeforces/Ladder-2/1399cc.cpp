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
#define mll map<ll,ll>

void solve()
{
	ll n;
	cin >> n;
	vector<int> a(n);

	fl(i, 0, n)
	{
		cin >> a[i];

	}


	ll ma = INT_MIN;

	fl(i, 1, 101)
	{
		ll coun = 0;
		mll m;
		fl(i, 0, n)
		{

			m[a[i]]++;
		}

		fl(j, 0, n) {
			if (a[j] >= i)
				continue;
			ll temp = i - a[j];

			if (m[temp] == 1 && m[a[j]] == 1 && temp == a[j])
				continue;
			else if (m[temp] > 0 && m[a[j]] > 0 )
			{
				coun++;
				m[temp]--;
				m[a[j]]--;
			}


		}

		ma = max(coun, ma);

	}
	cout << ma << endl;

}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}