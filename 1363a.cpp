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
#define fi 			    first
#define se 			    second
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vec(vct) 	    vector < ll > vct
#define vecpi(vct) 	    vector < pair < ll, ll > > vct
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
	test
	{
		int n, x;
		cin >> n >> x;
		int o = 0, e = 0;
		int a[n], b[n], c[n];
		reep(i, 1, n) cin >> a[i];
		reep(i, 1, n) {
			if (a[i] % 2)
				// b[i]=a[i];
				o++;
			else e++;
		}

		if (e == 0)
		{
			if (x % 2) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else if (o == 0) cout << "NO" << endl;
		else if (x == n && o % 2 == 0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}