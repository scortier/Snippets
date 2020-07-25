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

int largestPower(int n, int p)
{
	// Initialize result
	int x = 0;

	// Calculate x = n/p + n/(p^2) + n/(p^3) + ....
	while (n) {
		n /= p;
		x += n;
	}
	return x;
}

// Utility function to do modular exponentiation.
// It returns (x^y) % p
int power(int x, int y, int p)
{
	int res = 1; // Initialize result
	x = x % p; // Update x if it is more than or
	// equal to p
	while (y > 0) {
		// If y is odd, multiply x with result
		if (y & 1)
			res = (res * x) % p;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % p;
	}
	return res;
}

// Returns n! % p
int modFact(int n, int p)
{
	if (n >= p)
		return 0;

	int res = 1;

	// Use Sieve of Eratosthenes to find all primes
	// smaller than n
	bool isPrime[n + 1];
	memset(isPrime, 1, sizeof(isPrime));
	for (int i = 2; i * i <= n; i++) {
		if (isPrime[i]) {
			for (int j = 2 * i; j <= n; j += i)
				isPrime[j] = 0;
		}
	}

	// Consider all primes found by Sieve
	for (int i = 2; i <= n; i++) {
		if (isPrime[i]) {
			// Find the largest power of prime 'i' that divides n
			int k = largestPower(n, i);

			// Multiply result with (i^k) % p
			res = (res * power(i, k, p)) % p;
		}
	}
	return res;
}
void solve()
{
	ll a, b; cin >> a >> b;
	cout << modFact(a, b) << endl;

}

int32_t main()
{
	lag_gae();
	test
	solve();
	return 0;
}