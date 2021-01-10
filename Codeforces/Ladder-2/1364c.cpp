// QUARANTINE DAYS..;)
//COPIED
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
#define pr(a,n) rep(i,0,n) cout<<a[i]<<" ";	cout<<endl;

void fast() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/
int main() {
	fast();
	int n;
	cin >> n;
	vector<int> a(n + 1, -1);
	set<int> s;
	rep(i, 0, n) {
		cin >> a[i];
	}
	rep(i, 0, n + 1) {
		s.insert(i);
	}
	vector<int> b(n + 1, -1);
	rep(i, 0, n) {
		if (a[i] != a[i + 1]) {
			b[i + 1] = a[i];
			s.erase(a[i]);
		}
	}
	rep(i, 0, n) {
		if (b[i] == -1) {
			b[i] = *s.begin();
			s.erase(s.begin());
		}
	}
	pr(b, n);
}