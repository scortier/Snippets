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


void solve()
{
	int n;
	cin >> n;
	int a1[n + 1], a2[n + 1];
	map<int, int> p1;
	map<int, int> p2;
	rep(i, 1, n + 1) {
		cin >> a1[i];
		p1[a1[i]] = i;
	}
	rep(i, 1, n + 1) {
		cin >> a2[i];
		p2[a2[i]] = i;
	}
	map<int, int> ans;
	rep(i, 1, n + 1) {
		if (p1[i] - p2[i] >= 0) ans[p1[i] - p2[i]]++;
		else ans[n + p1[i] - p2[i]]++;
	}
	int cnt = 0;
	for (auto x : ans) cnt = max(cnt, x.s);
	cout << cnt << endl;

}

int32_t main()
{
	lag_gae();
	//test;
	solve();
	return 0;
}