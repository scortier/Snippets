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
		int n; cin >> n;
		int cnt = 0, ct = 0;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n - 2; i + 2)
		{
			if (i % 2 != a[i] % 2)
			{
				cnt++;
			}

		}
		for (int i = 1; i < n - 2; i + 2)
		{
			if (i % 2 != a[i] % 2)
			{
				ct++;
			}

		}
		if (ct == cnt) cout << cnt << endl;
		else cout << -1 << endl;
	}
	return 0;
}

