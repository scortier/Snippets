class Solution {
public:
	int myAtoi(string str) {

		stringstream object(str); //allow to read string like cin and for breaking words
		int ans = 0;
		object >> ans;

		return ans;
	}
};