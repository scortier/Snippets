//Author: Aditya Singh Sisodiya (Scortier)
#include<bits/stdc++.h>
using namespace std;

//m-1
/*A simple solution would be to apply Brute-Force.
For all values mat(a, b) in the matrix, we find mat(c, d) that has maximum value such that c > a
and d > b and keeps on updating maximum value found so far. We finally return the maximum value.
*/
int findMaxValue(int mat[][N])
{
	// stores maximum value
	int maxValue = INT_MIN;

	// Consider all possible pairs mat[a][b] and
	// mat[d][e]
	for (int a = 0; a < N - 1; a++)
		for (int b = 0; b < N - 1; b++)
			for (int d = a + 1; d < N; d++)
				for (int e = b + 1; e < N; e++)
					if (maxValue < (mat[d][e] - mat[a][b]))
						maxValue = mat[d][e] - mat[a][b];

	return maxValue;
}


//m-2

int main() {

}