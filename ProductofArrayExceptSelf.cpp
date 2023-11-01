#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            result.push_back(0);
        }
        if (count(nums.begin(), nums.end(), 0) > 1)
        {
            return result;
        }

        int product = 1, key = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                product *= nums[i];
            }
            else
            {
                key = 0;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                result[i] = product;
            }
            else
            {
                if (key == 1)
                {
                    result[i] = product / nums[i];
                }
                else
                {
                    result[i] = 0;
                }
            }
        }

        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-1, 1, 0, -3, 3};
    vector<int> result = s.productExceptSelf(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}