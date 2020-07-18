
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

long n, x0, fl, a[100000], b[100000], ans;

int main() {
	fast();
	cin >> n >> x0;
	ans = -1000000;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> b[i];
		if (a[i] > b[i])swap(a[i], b[i]);
	}

	for (int i = 0; i <= 1000; i++)
	{
		fl = 0;
		for (int j = 1; j <= n; j++)
			if (i < a[j] || i > b[j])
				fl = 1;
		if (fl == 0 && abs(i - x0) < abs(ans - x0))ans = i;
	}
	if (ans == -1000000)cout << -1 << endl;
	else cout << abs(x0 - ans) << endl;
	cin.get(); cin.get();

	return 0;
}
