#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string decodeString(string s)
    {
        stack<char> st;
        stack<int> m;
        string str;
        string ans;
        string temp2;

        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (c >= '0' && c <= '9')
            {
                temp2.push_back(c);
                for (int j = i + 1; j < s.size(); j++)
                {
                    char ch = s[j];
                    if (ch >= '0' && ch <= '9')
                    {
                        temp2.push_back(ch);
                    }
                    else
                    {
                        i = j - 1;
                        break;
                    }
                }
                int num = stoi(temp2);
                cout << num << endl;
                m.push(num);
                temp2.clear();
            }
            else if (c == ']')
            {
                int top = m.top();

                while (st.top() != '[')
                {
                    char c = st.top();
                    str.push_back(c);
                    st.pop();
                }
                st.pop();
                reverse(str.begin(), str.end());
                string temp = str;
                for (int i = 1; i < top; i++)
                {
                    str = str + temp;
                }

                if (!st.empty())
                {
                    for (int i = 0; i < str.size(); i++)
                    {
                        st.push(str[i]);
                    }
                }
                else
                {
                    ans = ans + str;
                }
                str.clear();
                m.pop();
            }
            else
            {
                st.push(c);
            }
        }

        string rest;
        while (!st.empty())
        {
            char c = st.top();
            rest.push_back(c);
            st.pop();
        }
        reverse(rest.begin(), rest.end());

        ans = ans + rest;

        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.decodeString("2[abc]3[cd]ef");
}