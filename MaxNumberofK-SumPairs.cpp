#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        unordered_map<int, int> freqMap;
        int maxOperations = 0;

        for (int num : nums)
        {
            int complement = k - num;

            if (freqMap.find(complement) != freqMap.end() && freqMap[complement] > 0)
            {
                maxOperations++;
                freqMap[complement]--;
            }
            else
            {
                freqMap[num]++;
            }
        }

        return maxOperations;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3, 1, 3, 4, 3};
    cout << s.maxOperations(nums, 6);
}