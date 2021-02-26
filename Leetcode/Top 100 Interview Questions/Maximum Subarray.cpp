//1. Kadane's Algorithm

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int sum = 0, max_sum = INT_MIN;
		for (auto x : nums)
		{
			sum += x;
			max_sum = max(sum, max_sum);
			if (sum < 0) sum = 0;
		}
		return max_sum;
	}
};

//2. Divide and Conquer
