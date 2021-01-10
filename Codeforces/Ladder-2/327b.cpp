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


bool isprime[5000000] = {0};
int main() {
	lag_gae();
	int i, j;
	for (i = 3; i < 5000000; i += 2) {
		isprime[i] = 1;
	}
	isprime[2] = 1;
	for (i = 3; i * i < 5000000; i += 2) {
		for (j = i * i; j < 5000000; j += i + i) {
			isprime[j] = 0;
		}
	}
	int n;
	cin >> n;
	for (i = 2; i < 5000000; i++) {
		if (isprime[i] == 1) {
			printf("%d ", i);
			n--;
		}
		if (n == 0) {
			break;
		}
	}
	return 0;
}