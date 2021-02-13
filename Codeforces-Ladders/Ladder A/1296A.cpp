#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        if(sum&1){
            cout<<"YES"<<endl;
        }
        else{
            int odd=0;
            for(int i=0;i<n;i++){
                if(a[i]&1){
                    odd+=1;
                }
            }
            if(odd<n && odd>0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}