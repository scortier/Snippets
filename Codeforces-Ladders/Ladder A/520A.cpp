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
#define lower(s) transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) transform(str.begin(), str.end(), str.begin(), ::toupper);
#define crap ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define get(arr, num) vector < ll > arr(num); for(int i=0; i<num; i++)cin >> arr[i];

char chngcs(char c)
{
    if((int)c>=65 && (int)c<=90)
        c=(char)((int)c+32);
    return c;
}
int main()
{
    ll n,i,j;
    cin>>n;
    char c;
    ll A[26]={0};
    for(i=0;i<n;i++)
    {
        cin>>c;
        c=chngcs(c);
        A[(int)c-97]++;
    }
    ll cnt=0;
    for(i=0;i<26;i++)
    {
        if(A[i]==0)
            cnt++;
    }
    if(cnt==0)
        cout<<"YES";
    else
        cout<<"NO";
}