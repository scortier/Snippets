class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        int n = a.size();
        int cnt = 0;
        vector<int> b(n, 0);
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] == a[i] - a[i - 1])
                b[i] = b[i - 1] + 1;
            cnt += b[i];
        }
        return cnt;
    }
};