// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    long long int tt;cin>>tt;while(tt--)
#define lloop(i,a,b)    for(i=a;i<b;i++)
#define loop(i,b)       for(long long int i=0;i<b;i++)
#define Loop(i,b)       for(long long int i=1;i<=b;i++)
#define ll 			    long long int
#define ld 			    long double
#define ull 		    unsigned long long int
#define P               pair<int, int>
#define pb 			    push_back
#define mp 			    make_pair
#define ff		        first
#define ss 			    second
#define MOD 		    1000000007
#define bug 		    cout<<"HY"<<endl
//#define fast 		    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define resize(A)       A.resize(unique(A.begin(), A.end()) - A.begin())
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vil(vct) 	    vector < ll > vct
#define vis(vct) 	    vector < string > vct
#define vip(vct) 	    vector < pair < ll, ll > > vct
#define pi 			    pair < ll , ll >
#define pii 			pair < pair < ll, ll >, ll >
#define Sort(arr) 		sort(arr.begin(), arr.end())
#define lower(str) 		transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) 		transform(str.begin(), str.end(), str.begin(), ::toupper);
bool cmp 				(pair<int, int> p1, pair<int, int> p2) { return p1.ff < p2.ff; }
void fast() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	fast();
	ll n, s;
	cin >> s >> n;
	vector <pair< int , int >>d;
	loop(i, n) {
		int x, y;
		cin >> x >> y;
		d.pb(mp(x, y));
	}
	sort(d.begin(), d.end(), cmp);
	int flag = 1;
	loop(i, n)
	{
		if (s > d[i].ff)
			s += d[i].ss;
		else
		{
			flag = 0;
			break;
		}
	}
	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;


	// while (n) {
	// 	n--;
	// 	ll x, y; cin >> x >> y;
	// 	if (s > x)
	// 	{	s += y;
	// 		n--;
	// 	}
	// 	else if (s < x) {flag++;}
	// }
	// if (flag > 0) {cout << "NO" << endl;}
	// else cout << "YES" << endl;


	return 0;
}





