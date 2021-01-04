class Solution {
public:
    int countConsistentStrings(string allow, vector<string>& words) {
        int n = words.size();
        bool flag[26] = {};

        for (char c : allow) flag[c - 'a'] = true;

        for (string word : words) {
            for (char x : word) if (!flag[x - 'a']) {
                    n--;
                    break;
                }
        }
        return n;
    }
};