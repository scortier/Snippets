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
#define lower(str) 		t	cntform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) 		t	cntform(str.begin(), str.end(), str.begin(), ::toupper);

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
	int a;
	cin >> a;
	int	cnt = 0;
	cnt = a / 100;
	a = a % 100;
	cnt += a / 20;
	a = a % 20;
	cnt += a / 10;
	a = a % 10;
	cnt += a / 5;
	a = a % 5;
	cnt += a;
	cout <<	cnt;
}