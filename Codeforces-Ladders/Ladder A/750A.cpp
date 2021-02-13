#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,sum = 240;
    cin>>n>>k;
    sum -= k;
    for(i=0; i<=n;i++)
    {
        sum -= 5*i;
        if(sum < 0)
            break;
    }
    cout<<i-1<<endl;
}
