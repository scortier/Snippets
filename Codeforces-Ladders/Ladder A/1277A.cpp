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

	
       int n;
       int p[100],q[100];
       int space[100];
      cin>>n;
      for(int i=0;i<n;i++)
         {
            cin>>p[i]>>q[i];
         }
      
      for(int i=0;i<n;i++)
         space[i]=q[i]-p[i];
      
      int count=0;
      	
      for(int i=0;i<n;i++)
         if(space[i]>=2)
            count++;
      
      cout<<count;
    

}

