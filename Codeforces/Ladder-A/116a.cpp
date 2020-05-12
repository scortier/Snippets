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
#define fi 			    first
#define se 			    second
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
	int n;
	cin >> n;
	int a[n][2];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 2; j++)
			cin >> a[i][j];
	int max = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		count += a[i][1] - a[i][0];
		if (count > max)
			max = count;
	}
	cout << max;
	return 0;
}




// int32_t main()
// {
// 	fast();
// 	int n, a[1000], b[1000];
// 	int ans[1000];
// 	cin >> n;

// 	Loop(i, n)
// 	cin >> a[i] >> b[i];

// 	ans[1] = 0;

// 	Loop(i, n)
// 	ans[i + 1] = ans[i] + (b[i] - a[i]);

// 	int m = 0;

// 	for (int i = 2; i <= n + 1; i++)
// 	{
// 		m = max(m, ans[i]);
// 	}
// 	cout << m;

// 	return 0;
// }







