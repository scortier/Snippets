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
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

// Function to find LCM
int findlcm(int a, int b)
{
	int gc = gcd(a, b);
	return a * b / gc;
}

int CountCommon(int arr1[], int arr2[],
                int m, int n)
{


	int diff1 = arr1[1] - arr1[0];
	int diff2 = arr2[1] - arr2[0];


	int lcm = findlcm(diff1, diff2);

	int ans1 = (arr1[m - 1] - arr1[0]) / lcm;
	int ans2 = (arr2[n - 1] - arr2[0]) / lcm;
	int ans = min(ans1, ans2);

	return ans ;
}
void solve()
{
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	fl(i, 0, n) cin >> a[i];
	fl(i, 0, m) cin >> b[i];
	cout << CountCommon(a, b, n, m) << endl;


}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}