#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {

        stack<int> stk;
        stk.push(0);
        int n = temperatures.size();
        vector<int> ans(n);
        int idx = 0;
        for (int i = 1; i < n; i++)
        {

            int x = temperatures[i];

            while (!stk.empty() && temperatures[stk.top()] < x)
            {

                ans[stk.top()] = i - stk.top();
                stk.pop();
            }

            stk.push(i);
        }

        while (!stk.empty())
        {

            ans[stk.top()] = 0;
            stk.pop();
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> temperatures = {30, 30, 30, 30};
    vector<int> result = s.dailyTemperatures(temperatures);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}