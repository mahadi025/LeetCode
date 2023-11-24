#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeStars(string s)
    {
        stack<char> decode;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '*')
            {
                decode.push(s[i]);
            }
            else if (s[i] == '*')
            {
                decode.pop();
            }
        }
        string newStr = "";
        while (!decode.empty())
        {
            newStr += decode.top();
            decode.pop();
        }
        reverse(newStr.begin(), newStr.end());
        return newStr;
    }
};

int main()
{
    Solution s;
    cout << s.removeStars("leet**cod*e");
}