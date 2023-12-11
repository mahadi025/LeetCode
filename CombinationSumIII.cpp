#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<vector<int>> &ans, vector<int> &output, int i, int k, int n)
    {
        if (output.size() == k && n == 0)
        {
            ans.push_back(output);
            return;
        }
        if (output.size() == k && n != 0)
        {
            return;
        }

        for (int x = i; x <= 9; x++)
        {
            output.push_back(x);
            solve(ans, output, x + 1, k, n - x);
            output.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int i = 1;
        solve(ans, output, i, k, n);
        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> result = s.combinationSum3(3, 7);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j];
        }
    }
}