//.h file code:

#include <string>
#include <unordered_map>
#include <vector>
#include <set>
#include <iostream>
#include <limits>
#include <optional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class PairInt;

class ChooseAFlask
{

public:
	static void main(std::vector<std::wstring> &args);

private:
	static int flaskType(int o, std::vector<int> &orders, int types, int total, std::vector<PairInt*> &typeMarks);

	static std::vector<PairInt*> buildPairInt(std::vector<std::vector<int>> &pairs);
};

class PairInt
{
public:
	int first = 0, second = 0;

	PairInt(int first, int second);
};

//Helper class added by Java to C++ Converter:

#include <string>
#include <vector>

int main(int argc, char **argv)
{
	std::vector<std::wstring> args(argv + 1, argv + argc);
	ChooseAFlask::main(args);
}

//.cpp file code:

#include "snippet.h"

void ChooseAFlask::main(std::vector<std::wstring> &args)
{
	std::wcout << flaskType(4, std::vector<int> {4, 6, 6, 7},
	                        3, 9, buildPairInt(std::vector<std::vector<int>>
	{
		std::vector<int> {0, 3},
		std::vector<int> {0, 5},
		std::vector<int> {0, 7},
		std::vector<int> {1, 6},
		std::vector<int> {1, 8},
		std::vector<int> {1, 9},
		std::vector<int> {2, 3},
		std::vector<int> {2, 5},
		std::vector<int> {2, 6}
	})) << std::endl;
}

int ChooseAFlask::flaskType(int o, std::vector<int> &orders, int types, int total, std::vector<PairInt*> &typeMarks)
{
	int type = -1, minWaste = std::numeric_limits<int>::max();
	std::unordered_map<int, std::set<int>> marksMap;
	std::unordered_map<int, int> orderMap;
	for (auto order : orders)
	{
		orderMap.emplace(order, orderMap.getOrDefault(order, 0) + 1);
	}
	for (auto mark : typeMarks)
	{
		marksMap.computeIfAbsent(mark->first, [&] (std::any val)
		{
			return std::set<>();
		})->add(mark->second);
	}
	for (int i = 0; i < types; i++)
	{
		std::optional<int> curWaste = 0, mark = 0;
		std::set<int> marks = marksMap[i];
		bool processedAll = true;
		for (auto curMark : orderMap)
		{
			if (curMark.first > mark)
			{
				mark = marks.ceiling(curMark.first);
				if (!mark)
				{
					processedAll = false;
					break;
				}
			}
			curWaste += (mark - curMark.first) * orderMap[curMark.first];
		}
		if (curWaste < minWaste && processedAll)
		{
			minWaste = curWaste;
			type = i;
		}
	}
	return type;
}

std::vector<PairInt*> ChooseAFlask::buildPairInt(std::vector<std::vector<int>> &pairs)
{
	return Arrays::stream(pairs).map([&] (std::any pair)
	{
		return new PairInt(pair[0], pair[1]);
	}).collect(Collectors::toList());
}

PairInt::PairInt(int first, int second)
{
	this->first = first;
	this->second = second;
}


//java

import java.util.*;
import java.io.*;
import java.util.stream.Collectors;

/**
 * Created on:  Jan 14, 2021
 * Questions: https://aonecode.com/amazon-online-assessment-choose-a-flask
 */

public class ChooseAFlask {

	public static void main(String[] args) {
		System.out.println(flaskType(4, new int[] {4, 6, 6, 7}, 3, 9, buildPairInt(new int[][] {{0, 3}, {0, 5}, {0, 7}, {1, 6}, {1, 8}, {1, 9}, {2, 3}, {2, 5}, {2, 6}})));
	}

	private static int flaskType(int o, int[] orders, int types, int total, List<PairInt> typeMarks) {
		int type = -1, minWaste = Integer.MAX_VALUE;
		Map<Integer, TreeSet<Integer>> marksMap = new HashMap<>();
		Map<Integer, Integer> orderMap = new HashMap<>();
		for (int order : orders) {
			orderMap.put(order, orderMap.getOrDefault(order, 0) + 1);
		}
		for (PairInt mark : typeMarks) {
			marksMap.computeIfAbsent(mark.first, val -> new TreeSet<>()).add(mark.second);
		}
		for (int i = 0; i < types; i++) {
			Integer curWaste = 0, mark = 0;
			TreeSet<Integer> marks = marksMap.get(i);
			boolean processedAll = true;
			for (int curMark : orderMap.keySet()) {
				if (curMark > mark) {
					mark = marks.ceiling(curMark);
					if (mark == null) {
						processedAll = false;
						break;
					}
				}
				curWaste += (mark - curMark) * orderMap.get(curMark);
			}
			if (curWaste < minWaste && processedAll) {
				minWaste = curWaste;
				type = i;
			}
		}
		return type;
	}

	private static List<PairInt> buildPairInt(int[][] pairs) {
		return Arrays.stream(pairs).map(pair -> new PairInt(pair[0], pair[1])).collect(Collectors.toList());
	}
}

class PairInt {
	int first, second;

	PairInt(int first, int second) {
		this.first = first;
		this.second = second;
	}
}
