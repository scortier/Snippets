int helper(std::vector<int> &jobs, int start, int days, std::vector<vector<int>> &dp)
{
    if (jobs.size() - start < days) return INT_MAX;
    if (days == 0) {
        if (start == jobs.size()) return 0;
        return INT_MAX;
    }
    if (dp[start][days] != 0) return dp[start][days];
    int cur = INT_MAX, maxm = 0;
    for (int i = start; i < jobs.size(); i++) {
        maxm = max(jobs[i], maxm);
        int next = helper(jobs, i + 1, days - 1, dp);
        if (next != INT_MAX) {
            cur = min(cur, maxm + next);
        }
    }
    return dp[start][days] = cur;
}

int min_container_size(std::vector<int> item_sizes, int days) {
    vector<vector<int>>dp(item_sizes.size(), vector<int>(days + 1));
    int result = helper(item_sizes, 0, days, dp);
    return result == INT_MAX ? -1 : result;
    return 0;
}

/////////////////////////////////////
//JAVA CODE

private static int helper(int[] jobs, int start, int days, Integer[][] dp) {
    if (jobs.size() - start < days) return Integer.MAX_VALUE;
    if (days == 0) {
        if (start == jobs.size()) return 0;
        return Integer.MAX_VALUE;
    }
    if (dp[start][days] != null) return dp[start][days];
    int cur = Integer.MAX_VALUE, max = 0;
    for (int i = start; i < jobs.size(); i++) {
        max = Math.max(jobs[i], max);
        int next = helper(jobs, i + 1, days - 1, dp);
        if (next != Integer.MAX_VALUE) {
            cur = Math.min(cur, max + next);
        }
    }
    return dp[start][days] = cur;
}
public static int minContainerSize(List<Integer> nums, int days) {
    // WRITE YOUR BRILLIANT CODE HERE
    Integer[][] dp = new Integer[nums.size()][k + 1];
    int result = helper(nums, 0, k, dp);
    return result == Integer.MAX_VALUE ? -1 : result;
    return 0;
}
