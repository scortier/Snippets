// The recursive version:

class Solution {
public:
    void reverseString(vector<char>& s, int pos = 0) {
        if (pos < s.size() / 2) {
            swap(s[pos], s[s.size() - 1 - pos]);
            reverseString(s, pos + 1);
        }
    }
};
// Another alternative recursive version doing basically the same:

class Solution {
public:
    void reverseString(vector<char>& s, int pos = 0) {
        if (pos >= s.size() / 2) return;
        swap(s[pos], s[s.size() - 1 - pos]);
        reverseString(s, pos + 1);
    }
};
// The translation of the problem to an iterative approach, which for once appears shorter, if you use the trick of declaring variables as parameters:

class Solution {
public:
    void reverseString(vector<char>& s, int pos = 0) {
        while (pos < s.size() / 2) swap(s[pos], s[s.size() - 1 - pos++]);
    }
};
// Finally, the real solution I would use outside of any interview context:

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(begin(s), end(s));
    }
};