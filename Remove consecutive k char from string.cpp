#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    int tt;cin>>tt;while(tt--)
#define fl(i,a,b)       for( int i=a;i<b;i++)
#define bfl(i,a,b)      for( int i=b-1;i>=a;i--)
#define ll 			    long long int
#define pb 			    push_back
#define mp 			    make_pair
#define f 			    first
#define s 			    second
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define pi 			    pair < int , int >
#define pr(gg)          cout<<gg<<endl
#define mk(arr,n,type)  type *arr=new type[n];

void lage_rho() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********=============########################============***********/


void solve()
{
	int k; cin >> k;
	string s;
	cin >> s;
	int n = s.size();

	int st = 0;
	fl(i, 0, n)
	{
		st = i - 1;
		if (s[i] == s[i - 1])
			while (s[i] == s[i - 1])
			{
				if (i - (st - 1) == k)
				{
					s.erase(st, k);
				}
				i++;
			}
		else i++;
	}
	cout << s;
}

int32_t main()
{
	lage_rho();
	// test
	solve();
	return 0;
}