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
int n;
string a;
string b;

void solve() {
	vector<vector<int>> ans; //2d matrix
	rep(i, 0, n)
	{
		if (a[i] < b[i]) { cout << -1 << endl; return;}
	}
	for (char c = 'z'; c >= 'a'; c--)
	{
		vector<int>pos;
		bool ok = 0;
		rep(i, 0, n) {
			if (b[i] == c && a[i] != c) {
				pos.pb(i);
			}
		}
		if (!ok && !pos.empty()) {
			rep(i, 0, n) {
				if (a[i] == c) {
					ok = 1;
					pos.pb(i);
				}
			}
		}
		if (!ok && !pos.empty()) {
			cout << -1 << endl;
			return;
		}

		if (!pos.empty()) ans.pb(pos);
		for (int i : pos) {
			a[i] = c;
		}
	}

	cout << ((int)ans.size())	<< endl;
	for (auto li : ans) {
		cout << ((int)li.size()) << " ";
		for (int x : li) cout << x << " ";
		cout << endl;
	}

}
int32_t main()
{
	fast();
	test{
		cin >> n >> a >> b;
		solve();
	}

	return 0;
}