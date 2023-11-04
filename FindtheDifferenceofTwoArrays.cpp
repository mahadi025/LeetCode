#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    std::vector<int> getDistinct(std::vector<int> &nums) // To get the distinct value
    {
        std::sort(nums.begin(), nums.end());
        auto last = std::unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());
        return nums;
    }
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        vector<vector<int>> result;
        vector<int>::iterator it;
        vector<int> num1Bup = nums1;
        vector<int> num2Bup = nums2;

        for (int i = 0; i < num2Bup.size(); i++)
        {
            it = remove(nums1.begin(), nums1.end(), num2Bup[i]);
            nums1.erase(it, nums1.end());
        }
        nums1 = getDistinct(nums1);
        result.push_back(nums1);
        for (int i = 0; i < num1Bup.size(); i++)
        {
            it = remove(nums2.begin(), nums2.end(), num1Bup[i]);
            nums2.erase(it, nums2.end());
        }
        nums1 = getDistinct(nums2);
        result.push_back(nums2);
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = {1, 2, 3, 3};
    vector<int> nums2 = {1, 1, 2, 2};
    vector<vector<int>> result = s.findDifference(nums1, nums2);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}