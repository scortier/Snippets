#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define ld long double
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007
#define bug cout<<"HY"<<endl
#define boost ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL)
int32_t main()
{
    int t,a,b,c,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>a>>b>>c;
        ans=ans+min(b,c/2);
        b=b-min(b,c/2);
        ans=ans+min(a,b/2);
        cout<<ans*3<<endl;
    }
}