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
#define MAX 100000
bitset<MAX> bit1, bit2, bit3;
// Function to return the count of common elements
int count_common(int a[], int n, int b[], int m)
{

	// Traverse the first array
	for (int i = 0; i < n; i++) {

		// Set 1 at position a[i]
		bit1.set(a[i]);
	}

	// Traverse the second array
	for (int i = 0; i < m; i++) {

		// Set 1 at position b[i]
		bit2.set(b[i]);
	}

	// Bitwise AND of both the bitsets
	bit3 = bit1 & bit2;

	// Find the count of 1's
	int count = bit3.count();

	return count;
}
void solve()
{
	int n, m; int a[n], b[m];
	cin >> n >> m;
	fl(i, 0, n) cin >> a[i];
	fl(i, 0, m) cin >> b[i];
	cout << count_common(a, n, b, m) << endl;


}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}