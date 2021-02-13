// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl            "\n"
#define test            long long int tt;cin>>tt;while(tt--)
#define lloop(i,a,b)    for(i=a;i<b;i++)
#define loop(i,b)       for(long long int i=0;i<b;i++)
#define Loop(i,b)       for(long long int i=1;i<=b;i++)
#define ll              long long int
#define ld              long double
#define ull             unsigned long long int
#define P               pair<int, int>
#define pb              push_back
#define mp              make_pair
#define fi              first
#define se              second
#define MOD             1000000007 
#define bug             cout<<"HY"<<endl
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define resize(A)       A.resize(unique(A.begin(), A.end()) - A.begin())
#define PI              acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vil(vct)        vector < ll > vct
#define vis(vct)        vector < string > vct
#define vip(vct)        vector < pair < ll, ll > > vct
#define pi              pair < ll , ll > 
#define pii             pair < pair < ll, ll >, ll >
#define Sort(arr)       sort(arr.begin(), arr.end())
#define lower(str)      transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str)      transform(str.begin(), str.end(), str.begin(), ::toupper);
long long power(long long a,long long b){
    long long ans=1;
    while(b>0){
        if(b&1){ans=(ans*a)%mod;}
                a=(a*a)%mod;
                b>>=1;
        }
    return ans;
        
}
vector<int>v;
void fun(int i){
    //cout<<i<<endl;
    if(i>4ll*INT_MAX)return;
    v.push_back(i);
    fun(i*10+4ll);
    fun(i*10+7ll);
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fun(0);
    sort(v.begin(),v.end());
    int l,r;
    cin>>l>>r;
    int ans=0;
    int x=lower_bound(v.begin(),v.end(),l)-v.begin();
    while(l<=r){
        ans+=v[x]*(min(v[x],r)-l+1);
        l=v[x]+1;
        x++;
    }
    cout<<ans;
    return 0;
}
