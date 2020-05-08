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
	ll n, q; cin >> n >> q;
	ll m = 0, p = 0; ll x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 1) {p += 1;}
		else {m += 1;}
	}
	ll l = min(p, m); ll a, b;
	for (int i = 0; i < q; i++) {
		cin >> a >> b;
		if (a == b) {
			cout << 0 << endl;
		}
		else {
			x = b - a + 1;
			if (x & 1) {cout << "0" << endl;}
			else {
				if (x / 2 <= l) {
					cout << "1" << endl;
				}
				else {
					cout << "0" << endl;
				}
			}
		}
	}

	return 0;
}