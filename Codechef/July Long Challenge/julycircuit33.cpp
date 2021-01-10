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
const int MAX = 2e6 + 10;

void lag_gae() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/

int prime[MAX];
unordered_map<int, int> max_map;

// Function to return a^n
int power(int a, int n, int m)
{
	if (n == 0)
		return 1;
	int p = power(a, n / 2) % m;
	p = (p * p) % m;
	if (n & 1)
		p = (p * a) % m;
	return p;
}

// Function to find the smallest prime factors
// of numbers upto MAX
void sieve()
{
	prime[0] = prime[1] = 1;
	for (int i = 2; i < MAX; i++) {
		if (prime[i] == 0) {
			for (int j = i * 2; j < MAX; j += i) {
				if (prime[j] == 0) {
					prime[j] = i;
				}
			}
			prime[i] = i;
		}
	}
}

// Function to return the LCM modulo M
ll lcmModuloM(const int* ar, int n, int m)
{

	for (int i = 0; i < n; i++) {
		int num = ar[i];
		unordered_map<int, int> temp;

		// Temp stores mapping of prime factor to
		// its power for the current element
		while (num > 1) {

			// Factor is the smallest prime factor of num
			int factor = prime[num];

			// Increase count of factor in temp
			temp[factor]++;

			// Reduce num by its prime factor
			num /= factor;
		}

		for (auto it : temp) {

			// Store the highest power of every prime
			// found till now in a new map max_map
			max_map[it.first] = max(max_map[it.first], it.second);
		}
	}

	ll ans = 1;

	for (auto it : max_map) {

		// LCM is product of primes to their highest powers modulo M
		ans = (ans * power(it.F, it.S, m)) % m;
	}

	return ans;
}

void solve()
{
	ll n, m, k; cin >> n >> m >> k;
	int a[n];
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, n) a[i] = pow(a[i], k);
	// rep(i, 0, n) pr(b[i]);
	ll y = lcmModuloM(a, n, m);
	pr(y);
	ll z = y % m;
	pr(z);


}

int32_t main()
{
	lag_gae();
	test
	solve();
	return 0;
}