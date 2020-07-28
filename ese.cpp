#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

using namespace std;
using namespace __gnu_pbds;//which means policy based DS

#define ll             long long
#define ff              first
#define ss              second
#define fl(i,a,b)       for(ll i=a; i<b; i++)
#define bfl(i,a,b)      for(ll i=a-1; i>=b; i--)
#define pb              push_back
#define mp              make_pair
#define pii             pair<ll,ll>
#define vi              vector<int>
#define vt(type)        vector<type>
#define noobething     ios_base::sync_with_stdio(false);   cin.tie(NULL); cout.tie(NULL);
#define mii             map<int,int>
#define pq             priority_queue<int>
#define bits(n)         __builtin_popcountll(n)
#define pi             3.14159265358979323846
#define all(v)          (v).begin(),(v).end()
#define tr(it, a)       for(auto it = a.begin(); it != a.end(); it++)
#define                 MAX 10000003

/*void solve()
{
    string s;
    cin>>s;

   sort(s.begin(),s.end());
   cout<<s<<endl;
}*/
int p = 90;
int fun(int x, int *y = &p)
{
	*y = x + *y;
	cout << *y << endl;
	return x + *y;
}
int main()
{
	/*noobething
	ll t;
	cin>>t;
	while(t--)
	solve();*/
	int p = 5, q = 10;
	p = fun(p);
	cout << p << " " << q;
	/* q=fun(::p,&p);
	 cout<<p<<" "<<q;*/


	return 0;
}