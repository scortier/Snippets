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
int main()
{
/*1.string input
2. insert the elements inside the vector in the order of i+2 with their ascii table.
3.and sort the i+2 elements 
4. print the elements */
fast;
string s;
cin>>s;
int n=s.size();
vector<int >v;
for(int i=0;i<n;i=i+2)
{
	v.pb(s[i]-'0');
}
sort(v.begin(),v.end());
n=v.size();
for(int i=0;i<n;i++)
{
	if(i!=n-1){
		cout<<v[i]<<"+";
	}
	else
	{
		cout<<v[i];
	}
}
return 0;
}


//ALTERNATE SOLUTION BY SWAPPING THE ALTERNATE NO
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int l,i,j;
//     char s[100];
//     scanf("%s",s);
//     l=strlen(s);
//     for(i=0;i<l;i+=2)
//     {
//         for(j=0;j<l-i-2;j+=2)
//         {
//             if(s[j]>s[j+2])
//             {
//                 swap(s[j],s[j+2]);
//             }
//         }
//     }
//     printf("%s",s);
//     return 0;
// }