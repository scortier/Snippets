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

void fast() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
}
/**********====================########################=================***********/


int is_prime[1000001];
int pp[1000001];
void sieve()
{
	int mod = 1000000;
	for (int i = 1; i <= mod; i++) is_prime[i] = 1;
	is_prime[0] = is_prime[1] = 0;

	for (int i = 2; i * i <= mod; i++)
	{
		if (is_prime[i] == 1)
		{
			for (int j = i * i; j <= mod; j += i)
				is_prime[j] = 0;
		}
	}
	int cnt = 0;

	reep(i, 0, mod)
	{
		if (is_prime[i] == 1)
			cnt++;
		if (is_prime[cnt] == 1)
			pp[i] = 1;
		else
			pp[i] = 0;
	}
	//commutative sum
	reep(i, 0, mod)
	{
		pp[i] += pp[i - 1];
	}
}
int32_t main()
{	sieve();
	fast();
	test
	{
		int n, m;	cin >> n >> m;
		// for(;n<=m;n++)
		// cnt+=pp[n];

		// cout<<cnt<<endl;

		cout << pp[m] - pp[n - 1] << endl;
	}
	return 0;
}