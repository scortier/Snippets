
#include<bits/stdc++.h>
using namespace std;

/**
 * Created on:  Feb 03, 2021
 * Questions:
 */
int getMaxStorage(set<int>& separators) {
    int pre = 0, max = 1;
    for (int cur : separators) {
        if (cur - pre > max) max = cur - pre;
        pre = cur;
    }
    return max;
}

void removeSeparators(set<int>& separators, vector<int>& remove) {
    for (auto separator : remove) {
        separators.erase(separator);
    }
}
int storage_optimization(int n, int m, vector<int>& h, vector<int>& v) {
    set<int> hs ;
    set<int> vs ;
    for (int i = 0; i <= n + 1; i++) {
        hs.insert(i);
    }
    for (int i = 0; i <= m + 1; i++) {
        vs.insert(i);
    }
    removeSeparators(hs, h);
    removeSeparators(vs, v);
    int maxH = getMaxStorage(hs), maxV = getMaxStorage(vs);
    return maxH * maxV;
}






///JAVA

private static int storageOptimization(int n, int m, List<Integer> h, List<Integer> v) {
    LinkedHashSet<Integer> hs = new LinkedHashSet<>(), vs = new LinkedHashSet<>();
    for (int i = 0; i <= n + 1; i++) {
        hs.add(i);
    }
    for (int i = 0; i <= m + 1; i++) {
        vs.add(i);
    }
    removeSeparators(hs, h);
    removeSeparators(vs, v);
    int maxH = getMaxStorage(hs), maxV = getMaxStorage(vs);
    return maxH * maxV;
}

private static int getMaxStorage(LinkedHashSet<Integer> separators) {
    int pre = 0, max = 1;
    for (int cur : separators) {
        if (cur - pre > max) max = cur - pre;
        pre = cur;
    }
    return max;
}

private static void removeSeparators(LinkedHashSet<Integer> separators, List<Integer> remove) {
    for (int separator : remove) {
        separators.remove(separator);
    }
}
