#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> v)
    {
        for (int i = 0; i < v.size(); i++)
            if (v[i] != 1)
                return false;
        return true;
    }

    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        vector<int> visited(rooms.size(), 0);
        int n = rooms.size();
        visited[0] = 1;
        int counter = 0;
        while (counter < n)
        {
            counter++;
            for (int i = 0; i < n; i++)
            {
                if (visited[i] == 1)
                {
                    for (int j = 0; j < rooms[i].size(); j++)
                    {
                        visited[rooms[i][j]] = 1;
                    }
                }
            }
            if (check(visited))
                return true;
        }

        return false;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> rooms = {
        {1, 3}, {3, 0, 1}, {2}, {0}};
    cout << s.canVisitAllRooms(rooms);
}