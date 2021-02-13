// 200 jyada le le bas saare test case pass kara de
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
int main()
{

fast;

	 int n,i;
      long long a[100002],b[100002],c[100002];
      
      cin>>n;
      for(int i=0;i<n;i++)
            cin>>a[i];
      for(int i=0;i<n-1;i++)
            cin>>b[i];
      for(int i=0;i<n-2;i++)
            cin>>c[i];
      
      long long suma=0,sumb=0,sumc=0;
      
      for(int i=0;i<n;i++)
            suma+=a[i];
      for(int i=0;i<n-1;i++)
            sumb+=b[i];
      for(int i=0;i<n-2;i++)
            sumc+=c[i];
         
      //cout<<suma<<" "<<sumb<<" "<<sumc<<endl;
      cout<<suma-sumb<<endl<<sumb-sumc;
            
    
return 0;

}