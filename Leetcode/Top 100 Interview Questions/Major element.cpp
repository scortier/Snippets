class Solution {
public:
    int majorityElement(vector<int>& a) {
        int maj_index = 0, cnt = 1;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[maj_index] == a[i]) cnt++;
            else cnt--;
            if (cnt == 0)
            {
                maj_index = i;
                cnt = 1;
            }
        }
        return a[maj_index];
    }
};

/*
APPROACHES:
1. MAP
2. SORT ARRAY THEN RETURN MID
3. MOPRE'S VOTING ALGO (IMPLEMENTED ABOVE)
*/