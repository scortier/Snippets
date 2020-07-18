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
		string s; cin >> s;
		int n = s.length();
		ll ans = n + 1;
		int l = 0;
		int cnt[4] = {};
		rep(r, 0, n)
		{
			int dig = (s[r] - '0');
			cnt[dig]++;

			while (cnt[s[l] - '0'] > 1)
				cnt[s[l] - '0']--, l++;

			if (cnt[1] && cnt[2] && cnt[3])
				ans = min(ans, r - l + 1);
		}
		if (ans == n + 1) cout << 0 << endl;
		else
			cout << ans << endl;
	}
	return 0;
}