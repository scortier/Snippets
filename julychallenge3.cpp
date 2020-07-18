// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    int tt;cin>>tt;while(tt--)
#define rep(i,a,b)      for( int i=a;i<b;i++)
#define rev(i,a,b)      for( int i=b-1;i>=a;i--)
#define reep(i,a,b)     for( int i=a;i<=b;i++)
#define ll 			    long long int
#define pb 			    push_back
#define mp 			    make_pair
#define f 			    first
#define s 			    second
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vi   		    vector < int >
#define pi 			    pair < int , int >
#define pr(gg)          cout<<gg<<endl
#define mk(arr,n,type)  type *arr=new type[n];
const int maxm = 2e6 + 10;

void lag_gae() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/


void solve()
{
	ll n;
	cin >> n;
	char c[8][8];
	rep(i, 0, 8)
	{
		rep(j, 0, 8)
		c[i][j] = '.';
	}

	rep(i, 0, 8)
	{
		rep(j, 0, 8)
		{
			if (n) {
				c[i][j] = '$';
				n--;
			} else
				break;
		}

	}
	rep(i, 0, 8)
	{
		rep(j, 0, 8)
		{
			if (c[i][j] == '$') {
				if (c[i + 1][j] == '.')
					c[i + 1][j] = 'X';
				if (c[i][j + 1] == '.')
					c[i][j + 1] = 'X';
				if (c[i + 1][j + 1] == '.')
					c[i + 1][j + 1] = 'X';
			}
		}

	}
	rep(i, 0, 8)
	{
		rep(j, 0, 8)
		{
			if (i == 0 && j == 0)
				cout << "O";
			else if (c[i][j] == '$') {
				cout << ".";
			} else
				cout << c[i][j];
		}
		cout << endl;
	}
}
int main()
{
	lag_gae();
	ll t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}