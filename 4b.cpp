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
#define printall(a) rep(i,0,a.size()) cout<<a[i]<<" "; cout<<endl;
void lag_gae() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/



int32_t main()
{
	lag_gae();
	ll n, s; cin >> n >> s;
	vi l(n), r(n);
	rep(i, 0, n)
	cin >> l[i] >> r[i];

	ll mns = 0, mxs = 0;
	rep(i, 0, n)
	mns += l[i], mxs += r[i];

	if (s < mns || s > mxs)
	{ cout << "NO" << endl; return 0;}

	ll d = s - mns;
	vi v(n);
	rep(i, 0, n) v[i] = l[i];
	rep(i, 0, n)
	{
		if (d < r[i] - l[i])
		{ v[i] = l[i] + d; break;}
		v[i] = r[i];
		d -= r[i] - l[i];
	}

	cout << "YES" << endl;
	printall(v);

	return 0;
}