// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl         "\n"
#define test         int tt;cin>>tt;while(tt--)
#define fl(i,a,b)       for( int i=a;i<b;i++)
#define bfl(i,a,b)      for( int i=b-1;i>=a;i--)
#define ll           long long int
#define pb           push_back
#define mp           make_pair
#define f           first
#define s           second
#define MOD         1000000007
#define PI           acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vi           vector < int >
#define pi           pair < int , int >
#define pr(gg)          cout<<gg<<endl
#define mk(arr,n,type)  type *arr=new type[n];
const int maxm = 2e6 + 10;

void lage_rho() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/
int totalSum(int a[], int n)
{
  int i, sum = 0, sum1 = 0, j;

  for (i = 0; i < n; i++)
  {

    sum1 = 0;

    // perform Bitwise OR operation
    // on all the subarray present
    // in array
    for (j = i; j < n; j++)
    {

      // OR operation
      sum1 = (sum1 | a[j]);

      // now add the sum after performing
      // the Bitwise OR operation
      sum = sum + sum1;
    }
  }

  return sum;
}

void solve()
{
  int n; cin >> n;
  int a[n];
  fl(i, 0, n)
  cin >> a[i];
  int x = totalSum(a, n);
  pr(x);

}

int32_t main()
{
  lage_rho();
  // test
  solve();
  return 0;
}