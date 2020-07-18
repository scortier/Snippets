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
/**********====================########################=================***********/

long n, q, calc[20000], t;
long ans;

int main() {
	fast();
	cin >> n;
	for (int i = 0; i < n; i++)
	{cin >> q; calc[q]++;}

	for (int iter = 1; iter <= 100; iter++)
	{
		t = 0;
		for (int i = 0; i <= 100; i++)
		{
			while (t <= i && calc[i] > 0) {++t; --calc[i];}
		}
		if (t)++ans;
	}
	cout << ans << endl;

	return 0;
}