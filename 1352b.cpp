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
	test{

		int n, k;
		cin >> n >> k;
		int n1 = n - (k - 1);
		if (n1 > 0 && n1 % 2 == 1) {
			cout << "YES" << endl;
			for (int i = 0; i < k - 1; ++i) cout << "1 ";
			cout << n1 << endl;
			continue;
		}
		int n2 = n - 2 * (k - 1);
		if (n2 > 0 && n2 % 2 == 0) {
			cout << "YES" << endl;
			for (int i = 0; i < k - 1; ++i) cout << "2 ";
			cout << n2 << endl;
			continue;
		}
		cout << "NO" << endl;
	}
	return 0;
}