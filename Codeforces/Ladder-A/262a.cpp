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
/**********====================########################=================***********/
int k;
bool lucky(int n)
{
	int cnt = 0;
	while (n)
	{
		int c = n % 10;
		if (c == 4 || c == 7)
			cnt++;
		n /= 10;
	}
	if (cnt <= k)
		return 1;
	else
		return 0;
}
int32_t main()
{
	fast();
	int n;
	cin >> n >> k;
	int num, ans = 0;
	loop(i, n)
	{
		cin >> num;
		ans += lucky(num);
	}
	cout << ans;

	return 0;
}