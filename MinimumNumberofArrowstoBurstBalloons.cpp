#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        vector<vector<int>> merged_intervals;
        sort(points.begin(), points.end());
        for (auto point : points)
        {
            vector<int> push = point;
            if (!merged_intervals.empty())
            {
                if (push[0] >= merged_intervals.back()[0] && push[0] <= merged_intervals.back()[1])
                {
                    merged_intervals.back()[0] = max(push[0], merged_intervals.back()[0]);
                    merged_intervals.back()[1] = min(push[1], merged_intervals.back()[1]);
                    continue;
                }
            }
            merged_intervals.push_back(push);
        }
        return merged_intervals.size();
    }
};

int main()
{
    Solution s;
    vector<vector<int>> points = {
        {10, 16},
        {2, 8},
        {1, 6},
        {7, 12}};
    cout << s.findMinArrowShots(points);
}