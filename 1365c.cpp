// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    long long int tt;cin>>tt;while(tt--)
#define rep(i,a,b)      for(long long int i=a;i<b;i++)
#define rev(i,a,b)      for(long long int i=b-1;i>=a;i--)
#define reep(i,a,b)     for(long long int i=a;i<=b;i++)
#define ll 			    long long int
#define pb 			    push_back
#define mp 			    make_pair
#define f 			    first
#define s 			    second
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vec 		    vector < ll >
#define vecpi	 	    vector < pair < ll, ll > >
#define pi 			    pair < ll , ll >
#define lower(str) 		transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) 		transform(str.begin(), str.end(), str.begin(), ::toupper);
#define mk(arr,n,type)  type *arr=new type[n];
const int maxm = 2e6 + 10;

void fast() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/

int32_t main()
{
	fast();
	int n; cin >> n;
	int x, y;
	int res = 0;
	vector<int>v1(n);
	vector<int> v2(n);
	for (int i = 0; i < n; i++) {
		cin >> x;
		v1[i] = x;
	}
	for (int i = 0; i < n; i++) {
		cin >> y;
		v2[i] = y;
	}


	for (int r = 0; r < n; r++)
	{

		// std::rotate function
		rotate(v2.begin(), v2.begin() + v2.size() - r, v2.end());
		int cnt = 0;
		for (int i = 0; i < n; i++) {

			// cout << v2[i] ;

			if (v1[i] == v2[i]) cnt++;
			// cout << cnt << endl;
		}
		// cout << endl;
		if (cnt > res) res = cnt;
	}
	cout << res << endl;
	return 0;
}