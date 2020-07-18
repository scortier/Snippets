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


#define LL long long
#define MOD 1000000007LL

LL powermod(LL a, LL p) {
	LL ret = 1;
	while (p > 0) {
		if (p & 1) {
			ret *= a;
		}
		ret %= MOD;
		a *= a;
		a %= MOD;
		p >>= 1;
	}
	return ret;
}
LL invmod(LL a) {
	a %= MOD;
	if (a < 0) {
		a += MOD;
	}
	return powermod(a, MOD - 2LL);
}

string s;
LL k;

int main() {
	lag_gae();
	cin >> s;
	cin >> k;
	int i;
	LL len = s.length();
	LL ans = 0, tp = 1;
	for (i = 0; i < len; i++) {
		if (s[i] == '0' || s[i] == '5') {
			ans += tp;
			if (ans >= MOD) {
				ans -= MOD;
			}
		}
		tp *= 2;
		if (tp >= MOD) {
			tp -= MOD;
		}
	}
	ans *= (powermod(2LL, k * len) - 1);
	ans %= MOD;
	if (ans < 0) {
		ans += MOD;
	}
	ans *= invmod(powermod(2LL, len) - 1LL);
	ans %= MOD;
	if (ans < 0) {
		ans += MOD;
	}
	cout << ans << endl;
	return 0;
}