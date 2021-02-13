#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
   int len=s.length();
    int cnt0=0,cnt1=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='1'){
            cnt1++;
            cnt0=0;
        }
        else if (s[i]=='0'){
            cnt0++;
            cnt1=0;
        }
        if(cnt1>=7||cnt0>=7)
        {
            break;
        }
    }

if(cnt1>=7||cnt0>=7)
{
    cout<<"YES";
}
else {
    cout<<"NO";
}
return 0;
}