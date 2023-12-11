#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int cnt1 = 0;
        int cnt2 = 0;
        int sum = 0;
        int check = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] == 0)
            {
                check = 1;
            }
        }
        if (check == 0)
        {
            return nums.size() - 1;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0 && nums[i] == 0 || i == nums.size() - 1 && nums[i] == 0)
            {
                continue;
            }
            if (cnt1 + cnt2 > sum)
            {
                sum = cnt1 + cnt2;
            }
            if (nums[i] == 1)
            {
                cnt2++;
            }
            else if (nums[i - 1] == 1 && nums[i + 1] == 1)
            {
                cnt1 = cnt2;
                cnt2 = 0;
            }
            else
            {
                cnt1 = 0;
                cnt2 = 0;
            }
        }
        if (cnt1 + cnt2 > sum)
        {
            sum = cnt1 + cnt2;
        }
        return sum;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0, 1, 1, 1, 0, 1, 1, 0, 1};
    cout << s.longestSubarray(nums);
}