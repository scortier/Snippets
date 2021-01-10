// QUARANTINE DAYS..;)
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

bool check_string_exist(string S)
{
	int size = S.length();

	bool check = true;

	for (int i = 0; i < size; i++) {

		if (S[i] != S[(i + 2) % size]) {
			check = false;
			break;
		}
	}

	return check;
}



void solve()
{
	string s; cin >> s;
	int n = s.size();
	bool flag = check_string_exist(s);
	if (flag) pr("0");
	else
	{
		// int r = change(s);
		// cout << r << endl;

		int cnt[256] = {0};
		fl(i, 0, n)
		{
			cnt[s[i]]++;
		}
		int max = 0;
		fl(i, 0, n)
		{
			if (max < cnt[s[i]])
				max = cnt[s[i]];
		}
		if (max ==  1) pr(n - 2);
		else pr(n - max);

	}

}

int32_t main()
{
	lage_rho();
	test
	solve();
	return 0;
}