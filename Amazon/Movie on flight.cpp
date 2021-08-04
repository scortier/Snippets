#include<bits/stdc++.h>
using namespace std;

vector<int> Movies_on_Flight(vector<int> &movieDurations, int d) {
    unordered_map<int, vector<int>> value2index;
    for (int i = 0; i < movieDurations.size(); i++) {
        if (value2index.find(movieDurations[i]) == value2index.end()) {
            value2index[movieDurations[i]] = {i};
        }
        else value2index[movieDurations[i]].push_back(i);
    }

    sort(movieDurations.begin(), movieDurations.end());

    int left = 0, right = movieDurations.size() - 1;
    int target = d - 30;
    int maxDuration = 0;
    vector<int> res(2);

    while (left < right) {
        int cur = movieDurations[left] + movieDurations[right];
        if (cur == target) {
            res[0] = movieDurations[left];
            res[1] = movieDurations[right];
            break;
        }
        else if (cur < target) {
            if (cur > maxDuration) {
                res[0] = movieDurations[left];
                res[1] = movieDurations[right];
                maxDuration = cur;
            }
            left++;
        }
        else right--;
    }

    if (res[0] == res[1]) {
        res[0] = value2index[res[0]][0];
        res[1] = value2index[res[1]][1];
    }
    else {
        res[0] = value2index[res[0]][0];
        res[1] = value2index[res[1]][0];
    }

    return res;
}


void test(vector<pair<vector<int>, int>> inputs) {
    for (auto input : inputs) {
        vector<int> res = Movies_on_Flight(input.first, input.second);
        cout << "[" << res[0] << ", " << res[1] << "]" << endl;
    }
}

int main() {
    vector<pair<vector<int>, int>> inputs;
    inputs.push_back(make_pair(vector<int> {90, 85, 75, 60, 120, 150, 125}, 250));
    inputs.push_back(make_pair(vector<int> {0, 0, 0}, 30));
    inputs.push_back(make_pair(vector<int> {10, 50, 20, 40, 30, 30, 0, 60}, 90));
    test(inputs);

    return 0;
}



///////////////////////////////////////////////////


class Solution {
public:

    vector<int> findPair(vector<int>& vec, int target) {
        if (vec.size() == 0) return {};
        vector<int> result;

        unordered_map<int, int> map;
        int curMax = INT_MIN;

        for (int i = 0; i < vec.size(); i++) {
            int toLook = target - 30 - vec[i];

            if ( map.find(toLook) != map.end()) {
                if ( max(toLook, vec[i]) > curMax) {
                    curMax = max(toLook, vec[i]);
                    result = {i, map[toLook]};
                    // result = {toLook,vec[i]};

                }
            }

            map[vec[i]] = i;
        }
        return result;
    }

    void printme(vector<int> v) {
        cout << " ============ " << endl;
        for (int i : v)
            cout << i << "," << " ";
    }
};

int main() {
    std::cout << "Hello World!\n";
    vector<int> v1{1, 10, 25, 35, 60};
    vector<int> v2{20, 50, 40, 25, 30, 10};
    vector<int> v3{50, 20, 10, 40, 25, 30};

    Solution s;
    s.printme(s.findPair(v1, 90));
    s.printme(s.findPair(v2, 90));
    s.printme(s.findPair(v3, 90));
}



//////////////////////////////////////////////

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    int max_num = 0;
    vector<int> res;

    target -= 30;

    for (int i = 0; i < nums.size(); ++i) {
        auto it = m.find(target - nums[i]);

        if (it != m.end()) {
            if (it->second > max_num) {
                max_num = it->second;
                res = {it->second, i};
            }
            if (i > max_num) {
                max_num = i;
                res = {it->second, i};
            }
        }
        m[nums[i]] = i;
    }
    return res;
}
