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

void fast() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
}
/**********====================########################=================***********/

int32_t main()
{
	fast();
	test
	{
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		vector<int> v;
		v.pb(a[0]);
		rep(i, 1, n - 1) {
			if (a[i] > a[i - 1] and a[i] > a[i + 1] or a[i] < a[i - 1]
			and a[i] < a[i + 1])
				v.pb(a[i]);
		}
		v.pb(a[n - 1]);

		cout << v.size() << endl;
		// for (auto x : v) cout << x << " ";
	}
	return 0;
}