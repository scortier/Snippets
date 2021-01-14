#include <bits/stdc++.h>
using namespace std;
#define flush cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define fill(w, t) memset(w, t, sizeof(w))
#define google cout << "Case #" << countu << ": "
#define S(t) (ll) t.size()
#define bl '\n'
#define nl cout << bl
#define cout1(a) cout << a << bl
#define cout2(a, b) cout << a << " " << b << bl
#define cout3(a, b, c) cout << a << " " << b << " " << c << bl
#define cout4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << bl
#define print(azz, szz, ezz)        \
  for (ll i = szz; i <= ezz; i++) { \
    cout << azz[i] << " ";          \
  }
#define rprint(azz, szz, ezz)       \
  for (ll i = szz; i >= ezz; i--) { \
    cout << azz[i] << " ";          \
  }
#define input(azz, szz, ezz) test(pzz, szz, ezz) cin >> azz[pzz]
#define all(v) v.begin(), v.end()
#define ll long long
#define ldb long double
#define db double
#define ull unsigned long long
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mk make_pair
#define pll pair<ll, ll>
#define pldb pair<ldb, ldb>
#define fi first
#define se second
#define vull vector<ull>
#define vll vector<ll>
#define vb vector<bool>
#define vldb vector<ldb>
#define vpll vector<pll>
#define vpldb vector<pldb>
#define pqmin priority_queue<ll, vector<ll>, greater<ll> >  // minheap
#define pq priority_queue<ll>  // maxheap ll
#define pqpll priority_queue<pll>  // maxheap pll
#define pqpllmin priority_queue<pll, vector<pll>, greater<pll> >  // minheap pll
#define mll map<ll, ll>
#define mldb map<ldb, ldb>
#define umll unordered_map<ll, ll>
#define sll set<ll>
#define usll unordered_set<ll>
#define test(i, azz, bzz) for (ll i = (azz); i <= (bzz); ++i)
#define rfor(i, bzz, azz) for (ll i = (bzz); i >= (azz); --i)
const ll mod = 1e9 + 7;
// const ll mod=998244353 ;
// ifstream  i_data("data.in");
// ofstream  o_data("data.out");
// #define cin  i_data
// #define cout o_data
// ifstream cin("b_read_on.txt"); ofstream cout("output3.txt");
// Use (<<) for multiplication
// Use (>>) for division
// ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout<<fixed;cerr.tie(NULL);
// find_by_order -> value at index
// order_of_key -> index of value
// while using (1<<i) use ((ll)1<<(ll)i)
// in Floyd-Warshall Algo, k is outer loop
// If an element was not initially in map and if asked mp[a],the element gets
// inserted a%=mod take a lot of time... try to use it minimum and use memset as
// it reduces a lot of time usage...use if(a>=mod) a%=mod
// cout<<(double) can be harmful , always use printf(%.9llf)...take
// scanf("%lf",&p[i][j]) as input , not llf; use s.erase(it++) for erasing
// iterator and then moving to the next one never use adj.resize(n) as value is
// persistent, always erase use builtin_popcountll() for ll
// no of prime numbers in range : (70,19) , (1000,168) , (100000,1229) ,
// (sqrt(10^9),3409) ;
// always check the use of segment tree using bottom-up dp
// gcd(0,0) gives runtime error
// power(a,b) == power(a,b%phi(a)) Fermet's Theorem
// never use "=" operator in compare function
// For checking odd cycles, check bipartite

void solve(ll countu) {
  ll n;
  cin >> n;
  vll ant[n];
  umll mp;
  test(i, 0, n - 1) {
    ll m;
    cin >> m;
    test(j, 0, m - 1) {
      ll x;
      cin >> x;
      mp[abs(x)]++;
      ant[i].pb(x);
    }
    sort(all(ant[i]));
  }
  ll ans = 0;
  ll ex = 0;
  for (auto x : mp) {
    if (x.second > 1) ex++;
  }
  test(i, 0, n - 1) {
    test(j, 0, S(ant[i]) - 1) {
      ll curr = 0;
      if (mp[abs(ant[i][j])] > 1) {
        if (ant[i][j] > 0) {
          curr = S(ant[i]) - (j + 1);
        } else {
          curr = j;
        }
      } else {
        if (ant[i][j] > 0) {
          curr = lb(all(ant[i]), -1 * ant[i][j]) - ant[i].begin();
        } else {
          curr = S(ant[i]) - (ub(all(ant[i]), -1 * ant[i][j]) - ant[i].begin());
        }
      }
      ans += curr;
      // cout<<curr<< ' ';
    }
    // nl;
  }
  cout << ans + ex << bl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  srand(time(0));
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  ll t = 1;
  cin >> t;
  test(i, 1, t) solve(i);

  return 0;
}
