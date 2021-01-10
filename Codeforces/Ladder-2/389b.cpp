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
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vec 		    vector < ll >
#define vecpi	 	    vector < pair < ll, ll > >
#define pi 			    pair < ll , ll >
#define lower(str) 		transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) 		transform(str.begin(), str.end(), str.begin(), ::toupper);
#define mk(arr,n,type)  type *arr=new type[n];
const int maxm = 2e6 + 10;

void fast() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/

using namespace std;

long n, arp[200][200];
char ar[200][200];
string st;
long flag;

int main() {
	fast();
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> st;
		for (int j = 1; j <= st.size(); j++)
			ar[i][j] = st[j - 1];
	}

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (ar[i][j] == '#' && arp[i][j] == 0)
			{
				arp[i][j]++;
				arp[i + 1][j]++;
				arp[i + 2][j]++;
				arp[i + 1][j - 1]++;
				arp[i + 1][j + 1]++;
			}
	/*
	for (int i=1;i<=n;i++)
	{
	    for (int j=1;j<=n;j++)
	    cout<<arp[i][j];
	    cout<<endl;
	}*/

	flag = 0;
	for (int i = 1; i <= n + 2; i++)
		for (int j = 1; j <= n + 2; j++)
		{
			if (ar[i][j] != '#' && arp[i][j] > 0)flag = 1;
			if (arp[i][j] > 1)flag = 1;
			if (ar[i][j] == '#' && arp[i][j] == 0)flag = 1;
		}
	if (flag)cout << "NO" << endl;
	else cout << "YES" << endl;

	cin.get(); cin.get();
	return 0;
}