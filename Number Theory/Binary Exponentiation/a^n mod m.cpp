/*
https://cp-algorithms.com/algebra/module-inverse.html




*/
int extended_euclid(int a, int b, int &x, int &y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		return a;//gcd(a,0)=a
	}
	//these new x1,y1 can be easily drive by putting a=b and b=a%b in ax+by=gcd(a,b)
	int x1, y1;
	int d = gcd(b, a % b, x1, y1);
	x = y1;
	y = x1 - y1 * (a / b);
	return d;
}

//modulo inv using extended euclid
void mod_inv()
{
	int x, y;
	int g = extended_euclid(a, b, x, y);
	if (g != 1) cout << "No Solution";
	else
	{
//Notice that we way we modify x. The resulting x from the extended Euclidean
//algorithm may be negative, so x % m might also be negative, and we first have to add m
//to make it positive.
		x = (x % m + m) % m;	//+m to make it positive
		cout << x << endl;
	}
}