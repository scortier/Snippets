// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    long long int tt;cin>>tt;while(tt--)
#define lloop(i,a,b)    for(i=a;i<b;i++)
#define loop(i,b)       for(long long int i=0;i<b;i++)
#define Loop(i,b)       for(long long int i=1;i<=b;i++)
#define ll 			    long long int
#define ld 			    long double
#define ull 		    unsigned long long int
#define P               pair<int, int>
#define pb 			    push_back
#define mp 			    make_pair
#define fi 			    first
#define se 			    second
#define MOD 		    1000000007
#define bug 		    cout<<"HY"<<endl
//#define fast 		    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define resize(A)       A.resize(unique(A.begin(), A.end()) - A.begin())
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vil(vct) 	    vector < ll > vct
#define vis(vct) 	    vector < string > vct
#define vip(vct) 	    vector < pair < ll, ll > > vct
#define pi 			    pair < ll , ll >
#define pii 			pair < pair < ll, ll >, ll >
#define Sort(arr) 		sort(arr.begin(), arr.end())
#define lower(str) 		transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) 		transform(str.begin(), str.end(), str.begin(), ::toupper);
 
void fast() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/
ll  n, g , b,x;
bool f(ll mid)
{
    ll y = g + b;
    ll good = mid/y*g;
    good += min(mid%y,g);
    ll bad = mid/y*b;
    bad += max(0LL,mid%y - g);
    ll z = n;
    z -= min(x,bad);
    z -= good;
    return z <= 0;
}
void solve()
{
    
    cin >> n >> g >> b;
    x = n/2;
    ll low = 1, high = 2e18, mid;
    while(low < high)
    {
        mid = (low + high)/2;
        if(f(mid))
        {
            high = mid;
        }
        else low = mid + 1;
    }
    cout<<low<<endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}