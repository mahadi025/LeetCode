#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        int i = 0;
        vector<char> vowels;
        while (i < s.size())
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                vowels.push_back(s[i]);
            }
            i++;
        }
        reverse(vowels.begin(), vowels.end());
        i = 0;
        int j = 0;
        while (i < s.size())
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                s[i] = vowels[j];
                j++;
            }
            i++;
        }
        return s;
    }
};

int main()
{
    Solution s;
    cout << s.reverseVowels("leetcode");
}