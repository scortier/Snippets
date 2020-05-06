// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    long long int tt;cin>>tt;while(tt--)
#define rep(i,a,b)      for(long long int i=a;i<b;i++)
#define rev(i,a,b)      for(long long int i=n-1;i>=a;i--)
#define reep(i,a,b)     for(long long int i=a;i<=b;i++)
#define ll 			    long long int
#define pb 			    push_back
#define mp 			    make_pair
#define fi 			    first
#define se 			    second
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vec(vct) 	    vector < ll > vct
#define vecpi(vct) 	    vector < pair < ll, ll > > vct
#define pi 			    pair < ll , ll >
#define pii 			pair < pair < ll, ll >, ll >
#define lower(str) 		transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) 		transform(str.begin(), str.end(), str.begin(), ::toupper);
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
	// int n, x; cin >> n;
	// int z, min;
	// vecpi(v);
	// reep(i, 1, n)
	// cin >> x,
	//     v.pb(mp(x, i));
	// //sort(v.begin(), v.end());
	// rep(i, 1, n)
	// {
	// 	z = v[i + 1].fi - v[i].fi;
	// 	min = v[2].fi - v[1].fi;
	// 	if (z <= min)
	// 	{
	// 		min = z;
	// 		cout << v[i + 1].se << " " << v[i].se << endl;
	// 	}
	// 	else
	// 		cout << 2 << " " << 1 << endl;
	// }//cout << v[1].se + 1 << " " << v[0].se + 1 << endl;
	int n; scanf("%d\n", &n);
	int * heights = new int[n];
	for (int k = 0; k < n; k++) {scanf("%d", heights + k);}

	int absDiff(abs(heights[0] - heights[n - 1])), index(n - 1);
	for (int k = 0; k < n - 1 ; k++) {if (abs(heights[k] - heights[k + 1]) < absDiff) {absDiff = abs(heights[k] - heights[k + 1]); index = k;}}
	printf("%d %d\n", 1 + index, 1 + (index + 1) % n );
	return 0;

}