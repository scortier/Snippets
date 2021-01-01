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
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int i = 0, j = 0, c = 0, ans = 0;
	while (i < n && j < n)
	{
		if (s[i] == 'M')
		{
			c = 0;
			if (s[j] == 'I')
			{
				if (i < j)
				{
					for (int k = i + 1; k < j; k++)
					{
						if (s[k] == ':')
							c++;
					}
				}
				if (i > j)
				{
					for (int k = j + 1; k < i; k++)
					{
						if (s[k] == ':')
							c++;
					}
				}

				int p = k + 1 - abs(j - i) - c;
				if (p > 0)
				{	ans += 1;
					j++;
					i++;
				}
				else
				{
					if (j > i)
						i++;
					else
						j++;
				}
			}
			else if (s[j] == 'X')
			{
				i = j + 1;
				j = j + 1;
			}
			else
			{
				j++;
			}

		}
		else if (s[i] == 'X')
		{

			i += 1;
			j = i;
		}
		else
		{
			i++;
		}

	}
	cout << ans << endl;

}
int main()
{
	lage_rho();
	ll t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}