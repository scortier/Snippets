/*
<<<<<<<<<<<---APPROACH-->>>>>>>>>>>>>>
To cal a^n in O(logn) time.
*/

// the recursive approach
long long binpow(long long a, long long b)
{
	if (b == 0) return 1; //a^0=1
	long long res = binpow(a, b / 2);
	if (b % 2) return res * res * a;
	else
		return res * res;
}


//iterative approach (faster)
long long binpow_itn(int a, int b)
{
	if (b == 0) return 1;
	int res = 1;
	while (b > 0)
	{
		res = res * a;
		a = a * a;
		b = b >> 1;
	}
	return res;
}

