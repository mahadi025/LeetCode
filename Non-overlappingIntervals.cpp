#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());

        int overlaps = 0;
        int i = 1;

        pair<int, int> range;
        range.first = intervals[0][0];
        range.second = intervals[0][1];

        while (i < intervals.size())
        {
            if (intervals[i][0] < range.second)
            {
                overlaps++;
                if (range.second > intervals[i][1])
                {
                    range.first = intervals[i][0];
                    range.second = intervals[i][1];
                }
            }
            else
            {
                range.first = intervals[i][0];
                range.second = intervals[i][1];
            }
            i++;
        }

        return overlaps;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> intervals = {
        {1, 2},
        {2, 3},
        {3, 4},
        {1, 3}};
    cout << s.eraseOverlapIntervals(intervals);
}