//Author: Aditya Singh Sisodiya (Scortier)
#include<bits/stdc++.h>
using namespace std;
#define r 4
#define c 4
//ANTICLOCLWISE ROTATION
void reversecol(int a[r][c])
{
	for (int top = 0; top < r; top++)
		for (int left = 0, right = c - 1; left < right; left++, right--)
			swap(a[top][left], a[top][right]);
}
void transpose(int a[r][c])
{
	for (int top = 0; top < r; top++)
		for (int left = top; left < c; left++)
			swap(a[top][left], a[left][top]);

}
int main() {
	int arr[r][c] = { { 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	};

	reversecol(arr);
	transpose(arr);

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			cout << arr[i][j] << " ";
		cout << '\n';
	}
	return 0;
}