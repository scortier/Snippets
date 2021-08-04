/**
 * Created on:  Jan 14, 2021
 * Questions: https://aonecode.com/aplusplus/interviewctrl/getInterview/8960009977
 */
#include<bits/stdc++.h>
using namespace std;

vector<int> buildArray(int n, int peekIdx, int lower, int upper) {
	vector<int> array(n, 0);
	int i = peekIdx, curVal = upper;
	while (i < n) array[i++] = curVal--;
	i = peekIdx;
	curVal = upper;
	while (i >= 0) array[i--] = curVal--;
	return array;
}

vector<int> winning_sequence(int n, int lower, int upper) {
	int totalNums = upper - lower + 1, peekIdx = 1;
	while (peekIdx < n - 1) {
		int requiredNums = n - peekIdx;
		if (peekIdx < totalNums && requiredNums <= totalNums) break;
		peekIdx++;
	}
	if (peekIdx == n - 1) return { -1};
	return buildArray(n, peekIdx, lower, upper);
}

