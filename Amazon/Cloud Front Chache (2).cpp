
///



int doBFS(int start)
{
    std::list<int> q;
    q.push_back(start);
    visited[start] = true;
    int cnt = 0;
    while (!q.empty())
    {
        int cur = q.pop_front();
        cnt++;
        if (g.find(cur) == g.end())
        {
            continue;
        }
        for (auto next : g[cur])
        {
            if (!visited[next])
            {
                q.push_back(next);
                visited[next] = true;
            }
        }
    }
    return (int)(ceil(sqrt(cnt)));
}

int getEfficiencyOfCloudFrontCaching(int N, vector<vector<int>> &edges)
{
    unordered_map<int, vector<int>>g();
    vector<bool>visited(N);
    for (int i = 0; i < edges.size(); ++i)
    {
        int src = edges[i][0] - 1, dest = edges[i][1] - 1;
        if (g.find(src) == g.end())
        {
            g.emplace(src, std::vector<>());
        }
        if (g.find(dest) == g.end())
        {
            g.emplace(dest, std::vector<>());
        }
        g[src].push_back(dest);
        g[dest].push_back(src);
    }

    int res = 0;
    for (int i = 0; i < N; ++i)
    {
        if (!visited[i])
        {
            res += doBFS(i);
        }
    }
    return res;
}




//java


// "static void main" must be defined in a public class.
class Solution {
    private int doBFS(int start) {
        Queue<Integer> q = new LinkedList<>();
        q.offer(start);
        visited[start] = true;
        int cnt = 0;
        while (!q.isEmpty()) {
            int cur = q.poll();
            cnt++;
            if (!g.containsKey(cur)) continue;
            for (int next : g.get(cur)) {
                if (!visited[next]) {
                    q.offer(next);
                    visited[next] = true;
                }
            }
        }
        return (int)(Math.ceil(Math.sqrt(cnt)));
    }
    public int getEfficiencyOfCloudFrontCaching(int N, int[][] edges) {
        g = new HashMap<>();
        visited = new boolean[N];
        for (int i = 0; i < edges.length; ++i) {
            int src = edges[i][0] - 1, dest = edges[i][1] - 1;
            if (!g.containsKey(src)) g.put(src, new ArrayList<>());
            if (!g.containsKey(dest)) g.put(dest, new ArrayList<>());
            g.get(src).add(dest);
            g.get(dest).add(src);
        }

        int res = 0;
        for (int i = 0; i < N; ++i) {
            if (!visited[i]) res += doBFS(i);
        }
        return res;
    }
    Map<Integer, List<Integer>> g;
    boolean[] visited;
}

public class Main {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[][] edges1 = {{1, 2}, {1, 3}, {2, 4}, {3, 5}, {7, 8}};
        System.out.println(sol.getEfficiencyOfCloudFrontCaching(10, edges1));
        int[][] edges2 = {{1, 2}, {1, 4}};
        System.out.println(sol.getEfficiencyOfCloudFrontCaching(4, edges2));
        int[][] edges3 = {{8, 1}, {5, 8}, {7, 3}, {8, 6}};
        System.out.println(sol.getEfficiencyOfCloudFrontCaching(8, edges3));
    }
}



