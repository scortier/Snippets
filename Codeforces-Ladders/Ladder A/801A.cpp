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

string s;
    cin>>s;
    int count=0,i;
    for(i=0;i<s.length()-1;i++)
      {
         if(s[i]=='V'&&s[i+1]=='K')
            {
               count++;
               s[i]=s[i+1]='*';
            }
            
      }
 
         if(s.find("VV")!=-1||s.find("KK")!=-1)
            {
               count++;
               
            }
   cout<<count;
}

