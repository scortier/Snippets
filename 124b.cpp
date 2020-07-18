// QUARANTINE DAYS..;)
//COPIED ...COMBINATORICS WEAK HAI BC.
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
#define fi 			    first
#define se 			    second
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vec(vct) 	    vector < ll > vct
#define vecpi(vct) 	    vector < pair < ll, ll > > vct
#define pi 			    pair < ll , ll >
#define pii 			pair < pair < ll, ll >, ll >
#define lower(str) 		transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) 		transform(str.begin(), str.end(), str.begin(), ::toupper);
const int maxm = 2e6 + 10;

void fast() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/


const int MAXN = 8;
const int INF = (int)1e+9;

int a[MAXN][MAXN];
int n, k;
int p[MAXN];
int ans;

int main()
{
	fast();
	scanf("%d %d\n", &n, &k);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			char c;
			scanf("%c", &c);
			a[i][j] = c - '0';
		}
		scanf("\n");
	}

	for (int i = 0; i < k; i++)
		p[i] = i;

	ans = INF;
	do
	{
		int mi = INF, ma = -INF;
		for (int i = 0; i < n; i++)
		{
			int x = 0;
			for (int j = 0; j < k; j++)
				(x *= 10) += a[i][p[j]];
			ma = max(ma, x);
			mi = min(mi, x);
		}
		ans = min(ans, ma - mi);
	} while (next_permutation(p, p + k));
	printf("%d\n", ans);
	return 0;
}