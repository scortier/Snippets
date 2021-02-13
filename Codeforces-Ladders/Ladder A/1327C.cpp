// QUARANTINE DAYS...SWPDGT
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define test int t;cin>>t;while(t--)
#define For(i,a,b) for(i=a;i<b;i++)
#define loop(i,b) for(int i=0;i<b;i++)
#define Loop(i,b) for(int i=1;i<=b;i++)
#define ll long long int
#define ld long double
#define pb push_back
#define test int t;cin>>t;while(t--)
#define mp make_pair
#define fi first
#define se second
#define MOD 1000000007 
#define bug cout<<"HY"<<endl
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define resize(A) A.resize(unique(A.begin(), A.end()) - A.begin())
typedef pair<int,int> P;
#define PI acos(-1.0)
#define ulli unsigned long long int
#define assign(x,val) memset(x,val,sizeof(x))
#define prec(val, dig) fixed << setprecision(dig) << val
#define vil(vct) vector < ll > vct
#define vis(vct) vector < string > vct
#define vip(vct) vector < pair < ll, ll > > vct
#define pi pair < ll , ll > 
#define pii pair < pair < ll, ll >, ll >
#define Sort(arr) sort(arr.begin(), arr.end())
#define lower(str) transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) transform(str.begin(), str.end(), str.begin(), ::toupper);
#define rep(i,st,en) for(__typeof(en) i=(st)-(st>en); i!=(en)-(st>en); i+=1-2*(st>en))
int main() {
    fast;
    int n, m, k;    cin>>n>>m>>k;
    vector<pair<int, int>> a, b;
    rep(i,0,k) {
        int x, y;   cin>>x>>y;
        a.push_back({x, y});
    }
    rep(i,0,k) {
        int x, y;   cin>>x>>y;
        a.push_back({x, y});
    }
    string ans = "";
    rep(i,0,n-1)
        ans += 'U';
    rep(i,0,m-1)
        ans += 'L';
    rep(i,0,n) {
        if(i%2 == 0)
            rep(i,0,m-1)
                ans += 'R';
        if(i%2 == 1)
            rep(i,0,m-1)
                ans += 'L';
        if(i != n-1)
            ans += 'D';
    }
    cout<<ans.size()<<endl;
    cout<<ans<<endl;
    return 0;
}