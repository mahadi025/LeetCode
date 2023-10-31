#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        stringstream ss(s);
        string word, newWord = "";
        vector<string> rev;
        while (ss >> word)
        {
            rev.push_back(word);
        }
        reverse(rev.begin(), rev.end());
        for (int i = 0; i < rev.size(); i++)
        {
            if (i == rev.size() - 1)
                newWord += rev[i];
            else
                newWord += rev[i] + " ";
        }
        return newWord;
    }
};

int main()
{
    Solution s;
    cout << s.reverseWords("the sky is blue");
}