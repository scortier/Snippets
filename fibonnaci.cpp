/*
<<<<<<<<<<<---APPROACH-->>>>>>>>>>>>>>

*/
#include<bits/stdc++.h>
using namespace std;

void fact(n)
{
	if (n == 0 or n == 1)
	{
		cout << n << " ";
		return;
	}
	fact(n - 1);
	cout << n << " ";
}

int32_t main()
{
	fact(6);
	return 0;
}