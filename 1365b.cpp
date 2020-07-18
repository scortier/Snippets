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
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vec 		    vector < ll >
#define vecpi	 	    vector < pair < ll, ll > >
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


// void solve()
// {
// 	ll n, x; cin >> n;
// 	ll cnt = 0, ct = 0;
// 	vector<ll>v(n), c(n);
// 	vector<ll> u(n);
// 	for (ll i = 0; i < n; i++) {
// 		cin >> x;
// 		v[i] = x;
// 		u[i] = x;
// 	}
// 	for (ll i = 0; i < n; i++) cin >> c[i];
// 	// for (int i = 0; i < n; i++)
// 	// {
// 	// 	if (c[i] == 0)  cnt++;
// 	// 	else if (c[i] == 1) ct++;
// 	// }
// 	// if (cnt == n || ct == n) cout << "NO" << endl;
// 	// else {
// 	rep(i, 0, n)
// 	{
// 		for (ll j = i + 1; j < n; j++)
// 		{
// 			if (v[i] > v[j] && c[i] != c[j])
// 			{
// 				swap(v[i], v[j]);
// 				swap(c[i], c[j]);
// 				// cout << v[i] << endl;
// 			}

// 		}
// 		cout << endl;
// 		cout << v[i] << endl;
// 	}

// 	sort(u.begin(), u.end());

// 	if (v == u)
// 		cout << "YES" << endl;
// 	else cout << "NO" << endl;
// 	// }

// }

void solve() {
	int n;
	cin >> n;
	int a[n], b[n];
	bool sorted = 1, have0 = 0, have1 = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (i >= 2 && a[i] < a[i - 1])
			sorted = 0;
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> b[i];
		if (!b[i])
			have0 = 1;
		else
			have1 = 1;
	}
	if (have0 && have1)
		cout << "Yes" << endl;
	else if (sorted)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

int main()
{
	fast();
	ll t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}