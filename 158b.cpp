#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

#define fl(i,a,b) for(int i=a;i<b;i++)
#define rfl(i,a,b) for(int i=b-1;i>=a;i--)
main() {
	int n, count = 0, sum = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
	cin >> n;
	int arr[n];
	fl(i, 0, n)
	cin >> arr[i];

	fl(i, 0, n) {
		if (arr[i] == 1)
			c1++;
		else if (arr[i] == 2)
			c2++;
		else if (arr[i] == 3)
			c3++;
		else c4++;
	}
	count += c4;
	count += min(c3, c1);
	int a = min(c3, c1);
	c3 -= a;
	c1 -= a;
	count += c3;
	count += c2 / 2;

	if (c2 & 1) {
		count++;
		c1 -= 2;;
	}

	if (c1 < 0)
		c1 = 0;
	count += c1 / 4;
	count += (c1 % 4 != 0);
	cout << count;
}