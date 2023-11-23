#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string freqAlphabets(string s)
    {
        map<string, char> charMap;
        for (int i = 1; i <= 26; ++i)
        {
            charMap[to_string(i)] = 'a' + i - 1;
        }

        string result = "";
        int i = s.length() - 1;

        while (i >= 0)
        {
            if (s[i] == '#')
            {
                string num = s.substr(i - 2, 2);
                result = charMap[num] + result;
                i -= 3;
            }
            else
            {
                string num = s.substr(i, 1);
                result = charMap[num] + result;
                i--;
            }
        }

        return result;
    }
};

int main()
{
    Solution s;
    cout << s.freqAlphabets("10#11#12");
}