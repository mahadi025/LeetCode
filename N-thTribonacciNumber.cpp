#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int tribonacci(int n)
    {
        vector<int> t(1000);
        t[0] = 0;
        t[1] = 1;
        t[2] = 1;
        for (int i = 3; i <= n; i++)
        {
            t[i] = t[i - 1] + t[i - 2] + t[i - 3];
        }
        return t[n];
    }
};

int main()
{
    Solution s;
    cout << s.tribonacci(4);
}