#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0, cnt = 0;
        while (i < s.size())
        {
            while (j < t.size())
            {
                if (s[i] == t[j])
                {
                    j++;
                    cnt++;
                    break;
                }
                else
                {
                    j++;
                }
            }
            i++;
        }
        return cnt == s.size();
    }
};
int main()
{
    Solution s;
    cout << s.isSubsequence("axc", "ahbgdc");
}