/*
	a[]={a ,e , i , o , u}
	n=1	 1	1	1	1	1
	n=2	 5	4	3	2	1
	n=3	15	10	6	3	1
	n=4	35 	20	10	4	1
*/

class Solution {
public:
	int countVowelStrings(int n) {
		vector<int>ans(5, 1);
		for (int i = 2; i <= n; i++)
		{
			for (int i = 3; i >= 0; i--)
			{
				ans[i] += ans[i + 1];
			}
		}
		int result;
		for (auto x : ans) result += x;
		return result;
	}
};