#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        vector<int> altitudes = {0};
        int sum = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            sum += gain[i];
            altitudes.push_back(sum);
        }
        return *max_element(altitudes.begin(), altitudes.end());
    }
};
int main()
{
    Solution s;
    vector<int> gain = {-4, -3, -2, -1, 4, 3, 2};
    cout << s.largestAltitude(gain);
}