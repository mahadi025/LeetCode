#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {

        vector<bool> result;

        for (int i = 0; i < candies.size(); i++)
        {
            int max = candies[i] + extraCandies;
            bool k = true;
            for (int j = 0; j < candies.size(); j++)
            {
                if (candies[j] > max)
                {
                    k = false;
                    break;
                }
            }
            if (k)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> candies = {12, 1, 12};
    vector<bool> r = s.kidsWithCandies(candies, 10);
    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << " ";
    }
}