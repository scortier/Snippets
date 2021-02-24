class Solution {
public:
    vector<int> intersect(vector<int>& a1, vector<int>& a2) {
        int n1 = a1.size();
        int n2 = a2.size();
        vector<int>ans;
        unordered_map<int, int>mp;
        for (auto x : a1) mp[x]++;
        for (auto y : a2)
        {   mp[y]--;
            if (mp[y] >= 0) ans.push_back(y);

        } return ans;

    }
};