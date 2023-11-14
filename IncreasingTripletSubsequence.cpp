#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {

        int left = INT_MAX;
        int mid = INT_MAX;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > mid)
            {
                return true;
            }
            else if (nums[i] > left && nums[i] < mid)
            {
                mid = nums[i];
            }
            else if (nums[i] < left)
            {
                left = nums[i];
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {5, 4, 3, 2, 1};
    cout << s.increasingTriplet(nums);
}