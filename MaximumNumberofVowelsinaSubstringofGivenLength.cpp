#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k)
    {
        int cnt = 0, max = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (isVowel(s[i]))
            {
                cnt++;
            }
            if (i >= k && isVowel(s[i - k]))
            {
                cnt--;
            }
            if (cnt >= max)
            {
                max = cnt;
            }
        }
        return max;
    }
};

int main()
{
    Solution s;
    cout << s.maxVowels("acdfeghijo", 4) << endl;
}