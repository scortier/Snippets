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
#define N 112345


int a[N];
int pre_min[N];
int suf_min[N];

void solve() {
	int n, x;
	cin >> n >> x;
	rep (i, 0, n) {
		cin >> a[i];
	}
	sort(a, a + n);
	reverse(a, a + n);
	int ans = 0;
	rep (i, 0, n) {
		int c = 1;
		while (i < n) {
			int r = (x + a[i] - 1) / a[i];
			if (r <= c) {
				ans++;
				break;
			}
			c++;
			i++;
		}
	}
	cout << ans << endl;
}
int32_t main()
{
	lag_gae();
	test
	solve();
	return 0;
}