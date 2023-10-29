#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string result = "";
        int i = 0, j = 0;
        while (i < word1.size() && j < word2.size())
        {
            result += word1[i];
            result += word2[j];
            i++;
            j++;
        }

        if (word1.size() > word2.size())
        {
            while (i < word1.size())
            {
                result += word1[i];
                i++;
            }
        }
        if (word2.size() > word1.size())
        {
            while (j < word2.size())
            {
                result += word2[j];
                j++;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    cout << s.mergeAlternately("abcd", "pq");
}