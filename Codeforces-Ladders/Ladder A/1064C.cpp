#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i,j;
    cin>>n;
    int A[26]={0};
    char ca;
    for(i=0;i<n;i++)
    {
        cin>>ca;
        A[(int)ca-97]++;
    }
    for(i=0;i<26;i++)
    {
        for(j=0;j<A[i];j++)
            cout<<(char)(i+97);
    }
}