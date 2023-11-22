#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        map<int, vector<int>> rowMap;
        map<int, vector<int>> colMap;

        for (int i = 0; i < grid.size(); ++i)
        {
            rowMap[i] = grid[i];
            for (int j = 0; j < grid[i].size(); ++j)
            {
                colMap[j].push_back(grid[i][j]);
            }
        }
        int cnt = 0;
        for (auto rowEntry : rowMap)
        {
            for (auto colEntry : colMap)
            {
                if (rowEntry.second == colEntry.second)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> grid = {
        {3, 1, 2, 2},
        {1, 4, 4, 5},
        {2, 4, 2, 2},
        {2, 4, 2, 2}};
    cout << s.equalPairs(grid);
}