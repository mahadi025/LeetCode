#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        map<char, int> m1;
        map<char, int> m2;

        if (word1.length() != word2.length())
            return false;

        else
        {
            for (int i = 0; i < word1.length(); i++)
            {
                if (m1.find(word1[i]) != m1.end())
                {
                    m1[word1[i]]++;
                }
                else
                {
                    m1.insert({word1[i], 1});
                }
                if (m2.find(word2[i]) != m2.end())
                {
                    m2[word2[i]]++;
                }
                else
                {
                    m2.insert({word2[i], 1});
                }
            }
        }

        vector<int> v1;
        vector<int> v2;

        for (auto i : m1)
        {
            v1.push_back(i.second);
        }
        for (auto i : m2)
        {
            v2.push_back(i.second);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        vector<char> v3;
        vector<char> v4;

        for (auto i : m1)
        {
            v3.push_back(i.first);
        }
        for (auto i : m2)
        {
            v4.push_back(i.first);
        }
        sort(v3.begin(), v3.end());
        sort(v4.begin(), v4.end());

        if (v1 == v2 && v3 == v4)
            return true;
        else
            return false;
    }
};

int main()
{
    Solution s;
    cout << s.closeStrings("cabbba", "abbccc");
}