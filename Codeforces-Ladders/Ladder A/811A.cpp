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
long long a,b;
    cin>>a>>b;
    long temp=1;
    int flag=0;
    
    while(a>0||b>0)
      {
         if(temp%2!=0)
           {
               if(a<temp)break;
              a-=temp;
              flag=0;
             
              
           }
         else
            {
               if(b<temp)break;
               b-=temp;
                flag=1;
               
              
            }
         temp++;
      }
   
   if(flag==0)
      cout<<"Valera";
   else
      cout<<"Vladik";
    


}