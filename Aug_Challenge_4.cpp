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


void solve()
{
	string s1, s2, s;
	cin >> s1 >> s2;
	ll n = s1.size(), m = s2.size();
	ll arr[27]; memset(arr, 0, sizeof(arr));
	ll b[27];
	//storing each char occurrence
	for (int i = 0; i < n; i++)
	{
		arr[s1[i] - 'a']++;

	}
	//subtracting each char of b in a
	for (int i = 0; i < m; i++)
	{
		arr[s2[i] - 'a']--;
	}
	// putting all elements of arr in b
	for (int i = 0; i < 26; i++)
		b[i] = arr[i];
	//now process to make new string
	//storing remaining s1 char in s first (lexicographically)
	for (int i = 0; i <= (s2[0] - 'a'); i++)
	{
		while (arr[i] > 0)
		{
			s += (char)(i + 97);
			arr[i]--;
		}
	}
	//then adding s2 directly to it
	s += s2;
	//fir baaki s1 k bache char lexi manner
	for (int i = 0; i < 26; i++)
	{
		while (arr[i] > 0)
		{
			s += (char)(i + 97);
			arr[i]--;
		}
	}

	//NOW SAME PROCESS FOR S2 CHAR
	string sf;
	for (int i = 0; i < s2[0] - 'a'; i++)
	{
		while (b[i] != 0)
		{
			sf += (char)(i + 97);
			b[i]--;
		}
	}
	sf += s2;
	for (int i = 0; i < 26; i++)
	{
		while (b[i] != 0)
		{
			sf += (char)(i + 97);
			b[i]--;
		}
	}
	// PRINT THE MIN LEXI STRING
	cout << min(s, sf) << "\n";
}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}