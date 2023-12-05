#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int decimalToBinary(int n)
    {
        int arr[100], i = 0, num = n;

        while (n != 0)
        {
            arr[i] = n % 2;
            i++;
            n = n / 2;
        }
        int cnt = 0;
        for (i = i - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                cnt++;
            }
        }
        return cnt;
    }

public:
    vector<int> countBits(int n)
    {
        vector<int> result;
        for (int i = 0; i <= n; i++)
        {
            result.push_back(decimalToBinary(i));
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> result = s.countBits(5);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}