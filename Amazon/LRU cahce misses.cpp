/**
https://www.youtube.com/watch?v=1p-mGuDY42c
 * Created on:  Jan 12, 2021
 * Questions: https://leetcode.com/discuss/interview-question/992179/Amazon-or-OA-2021-or-LRU-Cache-Misses
 */
#include<bits/stdc++.h>
using namespace std;
int lruCacheMisses_int(int num, vector<int>& pages, int maxCacheSize) {
//        If the max cache size is zero. Then every element will be a new item.
	if (maxCacheSize == 0) return pages.size();
	set<int>cache;
	// LinkedHashSet<Integer> cache = new LinkedHashSet<>();
	int count = 0;
	for (auto page : pages) {
		if (cache.find(page) != cache.end()) {

//                Move the element to the end.
			cache.erase(page);
			cache.insert(page);
		} else {
			if (cache.size() == maxCacheSize) {
//                    If cache is full, then get the first element and remove from cache
				auto first = cache.begin();
				cache.erase(first);
			}
			cache.insert(page);
			count++;
		}
	}
	return count;
}

//java

public class Solution {
	// public int lruCacheMisses(int num, List<Integer> pages, int maxCacheSize) {
	// }
	public int lruCacheMisses(int num, List<Integer> pages, int maxCacheSize) {
//        If the max cache size is zero. Then every element will be a new item.
		if (maxCacheSize == 0) return pages.size();
		LinkedHashSet<Integer> cache = new LinkedHashSet<>();
		int count = 0;
		for (int page : pages) {
			if (cache.contains(page)) {
//                Move the element to the end.
				cache.remove(page);
				cache.add(page);
			} else {
				if (cache.size() == maxCacheSize) {
//                    If cache is full, then get the first element and remove from cache
					int first = cache.stream().findFirst().get();
					cache.remove(first);
				}
				cache.add(page);
				count++;
			}
		}
		return count;
	}
}