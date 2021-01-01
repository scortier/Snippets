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
const int N = 4000001;
bool prime[N + 1];
void eratosthenes()
{
	memset(prime, true, sizeof(prime));
	for (int p = 2; p * p <= N; p++)
	{
		if (prime[p])
		{
			for (int i = p * p; i <= N; i += p)
				prime[i] = false;
		}
	}
}
void solve()
{
	int n;
	cin >> n;
	vector<int>b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	vector<int>a(n, 0);
	int j = 0, p = 2;
	while (j < n)
	{
		if (prime[p])
			a[j++] = p++;
		else
			p++;

	}
	for (int i = 0; i < n; i++)
	{

		a[i] = a[b[i] - 1];

	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	lage_rho();
	ll t;
	cin >> t;
	eratosthenes();
	while (t--)
		solve();

	return 0;
}