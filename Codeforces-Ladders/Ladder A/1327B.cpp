// QUARANTINE DAYS...SWPDGT
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
#define PI acos(-1.0)
#define ulli unsigned long long int
#define assign(x,val) memset(x,val,sizeof(x))
#define prec(val, dig) fixed << setprecision(dig) << val
#define vil(vct) vector < ll > vct
#define vis(vct) vector < string > vct
#define vip(vct) vector < pair < ll, ll > > vct
#define pi pair < ll , ll > 
#define pii pair < pair < ll, ll >, ll >
#define Sort(arr) sort(arr.begin(), arr.end())
#define lower(str) transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) transform(str.begin(), str.end(), str.begin(), ::toupper);
#define rep(i,st,en) for(__typeof(en) i=(st)-(st>en); i!=(en)-(st>en); i+=1-2*(st>en))

int main() {
    fast;
    test    {
        int n;  cin>>n;
        set<int> left, val;
        vector<set<int>> arr(n);
        rep(i,1,n+1)
            val.insert(i);
        rep(i,0,n) {
            int k;  cin>>k;
            rep(j,0,k) {
                int x;  cin>>x;
                arr[i].insert(x);
            }
        }
        rep(i,0,n) {
            bool f = false;
            for(int x: arr[i]) {
                if(val.find(x) == val.end())
                    continue;
                f = true;
                val.erase(x);
                break;
            }
            if(not f)
                left.insert(i+1);
        }
        if(left.size() == 0)
            cout<<"OPTIMAL"<<endl;
        else {
            cout<<"IMPROVE"<<endl;
            cout<<*left.begin()<<' '<<*val.begin()<<endl;
        }
    }
    return 0;
}