// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl        "\n"
#define test        long long int tt;cin>>tt;while(tt--)
#define rep(i,a,b)      for(long long int i=a;i<b;i++)
#define rev(i,a,b)      for(long long int i=n-1;i>=a;i--)
#define reep(i,a,b)     for(long long int i=a;i<=b;i++)
#define ll          long long int
#define pb          push_back
#define mp          make_pair
#define fi          first
#define se          second
#define MOD         1000000007
#define PI          acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vec(vct)      vector < ll > vct
#define vecpi(vct)      vector < pair < ll, ll > > vct
#define pi          pair < ll , ll >
#define pii       pair < pair < ll, ll >, ll >
#define lower(str)    transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str)    transform(str.begin(), str.end(), str.begin(), ::toupper);
const int maxm = 2e6 + 10;

void fast() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/


void solve() {
  int N;
  cin >> N;
  //note: 1<<X means 2^X
  //we put largest coin in first pile
  int sum1 = (1 << N), sum2 = 0;
  //we put n/2-1 smallest coins in first pile
  for (int i = 1; i < N / 2; i++)
    sum1 += (1 << i);
  //we put remaining n/2 coins in second pile
  for (int i = N / 2; i < N; i++)
    sum2 += (1 << i);
  cout << sum1 - sum2 << endl;
}

int main() {
  fast();
  int t; cin >> t;
  while (t--)
    solve();
}