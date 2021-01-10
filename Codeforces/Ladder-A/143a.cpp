
// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl            "\n"
#define test            long long int tt;cin>>tt;while(tt--)
#define rep(i,a,b)      for(long long int i=a;i<b;i++)
#define rev(i,a,b)      for(long long int i=b-1;i>=a;i--)
#define reep(i,a,b)     for(long long int i=a;i<=b;i++)
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define fi              first
#define se              second
#define MOD             1000000007
#define PI              acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vec(vct)        vector < ll > vct
#define vecpi(vct)      vector < pair < ll, ll > > vct
#define pi              pair < ll , ll >
#define pii             pair < pair < ll, ll >, ll >
#define lower(str)      transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str)      transform(str.begin(), str.end(), str.begin(), ::toupper);
const int maxm = 2e6 + 10;

void fast() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/

int main()
{
    fast();
    int r1, r2, c1, c2, d1, d2; cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int a11 = (r1 + c1 - d2) / 2;
    int a12 = r1 - a11;
    int a21 = c1 - a11;
    int a22 = d1 - a11;
    if (a11 != a12 && a11 != a21 && a11 != a22 && a12 != a21 && a12 != a22 && a21 != a22 && a11 >= 1 && a11 <= 9 && a12 >= 1 && a12 <= 9 && a21 >= 1 && a21 <= 9 && a22 >= 1 && a22 <= 9 && a21 + a22 == r2 && a12 + a22 == c2 && a12 + a21 == d2)
    {
        cout << a11 << " " << a12 << endl;
        cout << a21 << " " << a22 << endl;
    }
    else
        cout << -1 << endl;
    return 0;
}