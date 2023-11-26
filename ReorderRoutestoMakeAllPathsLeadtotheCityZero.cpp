#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minReorder(int n, vector<vector<int>> &connections)
    {
        unordered_set<int> visited;
        vector<unordered_map<int, bool>> graph(n);
        for (const vector<int> &connection : connections)
        {
            graph[connection[0]][connection[1]] = true;
            graph[connection[1]][connection[0]] = false;
        }

        int count = 0;
        dfs(0, visited, graph, count);
        return count;
    }

    void dfs(int city, unordered_set<int> &visited, vector<unordered_map<int, bool>> &graph, int &count)
    {
        visited.insert(city);
        for (const auto &entry : graph[city])
        {
            int neighbor = entry.first;
            bool direction = entry.second;
            if (visited.count(neighbor) == 0)
            {
                if (direction)
                {
                    count++;
                }
                dfs(neighbor, visited, graph, count);
            }
        }
    }
};

int main()
{
    Solution s;
    vector<vector<int>> connections = {
        {0, 1},
        {1, 3},
        {2, 3},
        {4, 0},
        {4, 5}};
    cout << s.minReorder(6, connections);
}