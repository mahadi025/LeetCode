#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size() + 1;
        int dp[n + 2];
        dp[1] = 0;
        dp[2] = 0;

        for (int i = 3; i <= n; i++)
        {
            dp[i] = min((cost[i - 3] + dp[i - 2]), (cost[i - 2] + dp[i - 1]));
        }

        return dp[n];
    }
};

int main()
{
    Solution s;
    vector<int> cost = {10, 15, 20};
    cout << s.minCostClimbingStairs(cost);
}