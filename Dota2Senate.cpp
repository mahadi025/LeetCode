#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string predictPartyVictory(string s)
    {
        int n = s.size();
        queue<int> radiant, dire;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
                radiant.push(i);
            else
                dire.push(i);
        }
        if (radiant.size() == 0)
            return "Dire";
        if (dire.size() == 0)
            return "Radiant";
        while (!radiant.empty() && !dire.empty())
        {
            if (radiant.front() < dire.front())
            {
                dire.pop();
                int i = radiant.front();
                radiant.push(i + n);
                radiant.pop();
            }
            else
            {
                radiant.pop();
                int i = dire.front();
                dire.push(i + n);
                dire.pop();
            }
        }
        return (radiant.size() == 0) ? "Dire" : "Radiant";
    }
};

int main()
{
    Solution s;
    cout << s.predictPartyVictory("RD");
}