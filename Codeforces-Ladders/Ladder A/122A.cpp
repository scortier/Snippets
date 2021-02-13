// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n;
// 	cin>>n;
// 	if(n%4==0||n%7==0||n%47==0||n%74==0||n%444==0||n%447==0||n%474==0||n%477==0||n%744==0||n%747==0||n%774==0||n%777==0)
// 		cout<<"YES";
// 	else
// 		cout<<"NO";

// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define loop(i,b) for(int i=0;i<b;i++)
int main()
{
	int flag=0;
	int ct=0;
	string s;
	cin>>s;
	int n=s.size();
	loop(i,n){
//	if(n%4==0||n%7==0||n%47==0||n%74==0||n%444==0||n%447==0||n%474==0||n%477==0||n%744==0||n%747==0||n%774==0||n%777==0)
	if (s[i]%4==0||s[i]%7==0)
		continue;
	else
		flag=1;
}
if(flag=1){cout<<"NO";}
loop(i,n)
{
	if(n%i==0){ct=1;}
	else{ct=0;}
}
if(ct==1){cout<<"YES";}
else{cout<<"NO";}

return 0;
}

