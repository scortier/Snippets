/*
<<<<<<<<<<<---APPROACH-->>>>>>>>>>>>>>
applications:
1. to find x and y
2. find gcd of 2 no
3. find modulo inverse
4. find linear diophantine eq (LDE)solution
*/

//soln for ax+by=gcd(a,b)
//use to find x and y
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
