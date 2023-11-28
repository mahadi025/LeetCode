#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int i = 0, j = 0;
        while (j < nums.size())
        {
            if (nums[j] == 0)
            {
                k--;
            }
            if (k < 0)
            {
                if (nums[i] == 0)
                {
                    k++;
                }
                i++;
            }
            j++;
        }
        return j - i;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    cout << s.longestOnes(nums, 2);
}