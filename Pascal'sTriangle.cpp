#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result(numRows, vector<int>());

        for (int line = 0; line < numRows; line++)
        {
            for (int i = 0; i <= line; i++)
            {
                if (line == i || i == 0)
                    result[line].push_back(1);
                else
                    result[line].push_back(result[line - 1][i - 1] + result[line - 1][i]);
            }
        }
        return result;
    }
};

int main()
{
    Solution s;

    vector<vector<int>> result = s.generate(5);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}