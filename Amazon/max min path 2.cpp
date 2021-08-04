//all 4 dirn allowed

int getMinMax(vector<vector<int>>& grid) {
	vector<vector<int>> dp(grid.size(), vector<int>grid[0].size());

	for (int i = 0; i < dp.length; i++) {
		for (int j = 0; j < dp[i].length; j++) {
			if (i == 0 && j == 0) {
				dp[i][j] = grid[i][j];
				continue;
			}
			int minm = INT_MIN;
			int top =  i > 0 ? dp[i - 1][j] : minm;
			int left = j > 0 ? dp[i][j - 1] : minm;
			dp[i][j] = max(min(top, grid[i][j]), min(left, grid[i][j]));
		}
	}
	return dp[dp.length - 1][dp[0].length - 1];
}