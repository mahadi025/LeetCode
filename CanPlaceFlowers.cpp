#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        vector<int> bed = {0};
        bed.insert(bed.end(), flowerbed.begin(), flowerbed.end());
        bed.push_back(0);
        for (int i = 1; i < bed.size() - 1; i++)
        {
            if (bed[i] == 0 && bed[i - 1] == 0 && bed[i + 1] == 0)
            {
                bed[i] = 1;
                n -= 1;
            }
            if (n <= 0)
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    Solution s;
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    cout << s.canPlaceFlowers(flowerbed, 1);
}