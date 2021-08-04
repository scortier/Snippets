#include<bits/stdc++.h>
using namespace std;
/**
 * Created on:  Jan 14, 2021
 * Questions: https://aonecode.com/amazon-online-assessment-shopping-patterns
 */
int minm;
void dfs(int start, int cur, map<int, set<int>>graph, vector<bool>& visited, int score, int edge) {
    visited[cur] = true;
    set<int>connections = graph.emplace(cur, set<int>());
    // Set<Integer> connections = graph.getOrDefault(cur, new HashSet<>());
    int curScore = connections.size() - edge, totalScore = score + curScore;
    for (int next : connections) {
        if (edge == 3) {
            if (next == start) {
                minm = min(minm, totalScore);
            }
        } else if (!visited[next] && edge < 3) {
            dfs(start, next, graph, visited, totalScore, edge + 1);
        }
    }
    visited[cur] = false;
}
int shopping_patterns(int nodes, int edges, vector<int>& from, vector<int>& to) {
    minm = INT_MAX;
    map<int, set<int>> graph;
    // Map<Integer, Set<Integer>> graph = new HashMap<>();
    for (int i = 0; i < edges; i++) {
        graph.computeIfAbsent(from[i], val -> new HashSet<>()).add(to[i]);
        graph.computeIfAbsent(to[i], val -> new HashSet<>()).add(from[i]);
    }
    boolean[] visited = new boolean[nodes + 1];
    for (int i = 1; i <= nodes; i++) {
        if (graph.containsKey(i)) {
            dfs(i, i, graph, visited, 0, 1);
        }
    }
    return min == INT_MAX ? -1 : min;
}


