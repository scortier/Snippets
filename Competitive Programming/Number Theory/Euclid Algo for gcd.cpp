/*
<<<<<<<<<<<---APPROACH-->>>>>>>>>>>>>>
1. brute for ce by iteration over each no
2. euclid (recursive calls)
	gcd(a,b)=gcd(b,a%b)
	gcd(a,0)=a
*/
#include<bits/stdc++.h>
using namespace std;

int euclid_gcd(int a, int b)
{
	return b == 0 ? a : euclid_gcd(b, a % b);
}
//gcd * lcm = a*b



int32_t main()
{

	return 0;
}