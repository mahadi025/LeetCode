#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int max = 0;
        int sum = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            sum += gain[i];
            if (sum > max)
            {
                max = sum;
            }
        }
        return max;
    }
};
int main()
{
    Solution s;
    vector<int> gain = {-4, -3, -2, -1, 4, 3, 2};
    cout << s.largestAltitude(gain);
}