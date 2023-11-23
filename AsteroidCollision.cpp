#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        vector<int> afterCollison;
        for (auto &i : asteroids)
        {
            if (!afterCollison.empty() && afterCollison.back() > 0 && i < 0)
            {
                int flag = 1;
                while (!afterCollison.empty() && afterCollison.back() > 0 && i < 0)
                {
                    if (abs(afterCollison.back()) < abs(i))
                    {
                        afterCollison.pop_back();
                    }
                    else if (abs(afterCollison.back()) == abs(i))
                    {
                        afterCollison.pop_back();
                        flag = 0;
                        break;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }

                if (flag)
                {
                    afterCollison.push_back(i);
                }
            }
            else
            {
                afterCollison.push_back(i);
            }
        }
        return afterCollison;
    }
};

int main()
{
    Solution s;
    vector<int> asteroids = {8, -8};
    vector<int> result = s.asteroidCollision(asteroids);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}