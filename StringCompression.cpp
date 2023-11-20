#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        vector<char> newChar;
        int i = 0;
        while (i < chars.size())
        {
            int j = i + 1;
            int cnt = 1;
            while (j < chars.size() && chars[j] == chars[i])
            {
                j++;
                cnt++;
            }
            newChar.push_back(chars[i]);
            if (cnt > 1)
            {
                string cntStr = to_string(cnt);
                for (char c : cntStr)
                {
                    newChar.push_back(c);
                }
            }
            i = j;
        }
        chars = newChar;
        return newChar.size();
    }
};
int main()
{
    Solution s;
    vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
    cout << s.compress(chars);
}