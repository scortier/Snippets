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


//2 ptr method
void revarray2ptr(int a[], int start, int end)
{
	int i = 0, j = n - 1;
	while (end > start)
	{
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i < a.size(); i++)
	{
		/* code */cout << a[i] << " "	;
	}
}


// recursive approach
void revarr(int a[], int start, int end)
{
	int i = 0, j = n - 1;


	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	i++;
	j--;

	revarr(a, start + 1, end - 1);
	for (int i = 0; i < n; ++i)
	{
		/* code */cout << a[i] << " "	;
	}
}

void solve()
{
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	revarray2ptr(a, 0, n - 1);

}

int32_t main()
{
	lage_rho();
	//test
	solve();
	return 0;
}