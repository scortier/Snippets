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

int main()
{
	fast();
	int n;
	cin >> n;

	char a[n][n];
	rep(i, 0, n)
	rep(j, 0, n)
	cin >> a[i][j];

	int dia[26] = {0}, nondia[26] = {0};
	rep(i, 0, n)
	rep(j, 0, n)
	if (i == j || i + j == n - 1)
		dia[a[i][j] - 'a']++;
	else
		nondia[a[i][j] - 'a']++;

	int alpha, flag = 0;
	rep(i, 0, 26)
	{
		if (dia[i] == 2 * n - 1)
		{
			alpha = i;
			flag++;
			break;
		}
	}

	rep(i, 0, 26)
	{
		if (i == alpha)
			continue;
		if (nondia[i] == n * n - 2 * n + 1)
		{
			flag++;
			break;
		}
	}
	if (flag == 2)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}