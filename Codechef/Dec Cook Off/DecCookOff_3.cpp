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
#define cnt(a,x)		count(a.begin(),a.end(),'x')

void lage_rho() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********=============########################============***********/

/*
convert string into self destructing string.
1. must have equal no of zero and one.
2. even length
3. check the no of zero and one then find the diff bw (let x =diff bw zero and one)
x/2 inversion req to convert s to self...string.
*/
void solve()
{
	string s;
	cin >> s;
	ll n = s.size();
	ll cnt0 = count(s.begin(), s.end(), '0');
	ll cnt1 = count(s.begin(), s.end(), '1');
	int x = 0;
	// cout << cnt1 << endl;
	if (n & 1 or cnt0 == 0 or cnt1 == 0) cout << -1 << endl;
	else {
		cout << abs(cnt1 - cnt0 ) / 2 << endl;
	}
}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}