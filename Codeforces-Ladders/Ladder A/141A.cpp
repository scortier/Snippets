#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    
    ll i;
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    int A[26]={0};
    for(i=0;i<s1.length();i++)
    {
        A[(int)s1[i]-65]++;
    }
    for(i=0;i<s2.length();i++)
    {
        A[(int)s2[i]-65]++;
    }
    for(i=0;i<s3.length();i++)
    {
        A[(int)s3[i]-65]--; //pehle A m saare letter d
    }
    for(i=0;i<26;i++)
    {
        if(A[i]!=0)
        {
            cout<<"NO";
            goto last;
        }
    }
    cout<<"YES";
    last:
    ;
}