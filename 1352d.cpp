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
#define mk(arr,n,type)  type *arr=new type[n];
void fast() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/
// alice>bob then stop.
int32_t main()
{
	fast();
	test
	{
		int n; cin >> n;
		mk(arr, n, int); //dynamic array

		int st = 0, en = n - 1;  //st for alice and en for bob

		for (int i = 0; i < n; ++i)
			cin >> arr[i];

		int moves = 0;
		int turn = 0;
		int lst[2] = {};
		int tot[2] = {};

		while (st <= en)
		{
			int cur = 0;

			if (turn == 0)
			{
				bool done = 0;
				for (int i = st; i <= en; ++i)
					if (cur > lst[1])
					{
						st = i;
						done = 1;
						break;
					}
					else
						cur += arr[i];

				if (!done)
					st = en + 1;
			}

			else
			{
				bool done = 0;
				for (int i = en; i >= st; --i)
					if (cur > lst[0])
					{
						en = i;
						done = 1;
						break;
					}
					else
						cur += arr[i];

				if (!done)
					en = st - 1;
			}

			tot[turn] += cur;
			lst[turn] = cur;
			moves++;
			turn = 1 - turn;
		}

		cout << moves << ' ' << tot[0] << ' ' << tot[1] << '\n';
	}
	return 0;
}