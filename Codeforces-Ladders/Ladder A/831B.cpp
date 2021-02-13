#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string changecs(string s)
{
    for(ll i=0;i<s.length();i++)
    {
        s[i]=(char)((int)s[i]-32);
    }
    return s;
}
int main()
{
    string s1,s11,s2,s22,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    s11=changecs(s1);
    s22=changecs(s2);
    ll i,j;
    for(i=0;i<s3.length();i++)
    {
        if((int)s3[i]<=90)
        {
           for(j=0;j<s11.length();j++)
           {
               if(s3[i]==s11[j])
               {
                   cout<<s22[j];
                   goto last;
               }
           }
        }
        else
        {
         for(j=0;j<s11.length();j++)
           {
               if(s3[i]==s1[j])
               {
                   cout<<s2[j];
                   goto last;
               }
           }   
        }
        cout<<s3[i];
    last:
        ;
    }
}