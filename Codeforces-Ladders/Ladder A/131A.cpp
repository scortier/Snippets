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
 {
          string str, word;
          int i,flag=0;
 
          cin>>word;
 
          str=word;
 
          int len=str.length();
 
          for(i=1;i<=len;i++)
             {
                    if(str[i]>='a'&& str[i]<='z')
                        {flag=1;
                        break;}
                }
 
          if(len>1)
          {
                   if((str[1]>='A'&& str[1]<='Z')&&(str[0]>='a'&&str[0]<='z'))      //A=65 a=97
                        {
                        for(i=0;i<len;i++)
                            if(str[i]>='A'&&str[i]<='Z')
                                str[i]+=32;
                            else
                                str[i]-=32;
                        }
                    else
                    if((str[1]>='A'&&str[1]<='Z')&&(str[0]>='A'&&str[0]<='Z'))
                        {
                        for(i=0;i<len;i++)
                            if(str[i]>='A'&&str[i]<='Z')
                                str[i]+=32;
                            else
                                str[i]-=32;
                        }
              }
 
 
          else
          if(len=1)
               {
                    if(str[0]>='A'&&str[0]<='Z')
                    str[0]+=32;
                    else
                    str[0]-=32;
               }
            if(flag)
            cout<<word;
            else
            cout<<str;
     return 0;
     }
   }