#include <bits/stdc++.h>
using namespace std;

class StockSpanner
{
public:
    stack<pair<int, int>> stock;
    int len;
    StockSpanner() {}

    int next(int price)
    {
        if (stock.empty())
        {
            stock.push({price, 0});
            len = 1;
            return 1;
        }
        while (!stock.empty())
        {
            auto p = stock.top();
            int val = p.first;
            int idx = p.second;
            if (price < val)
            {
                stock.push({price, len});
                len++;
                return (len - idx - 1);
            }
            else
            {
                stock.pop();
            }
        }
        stock.push({price, len});
        len++;
        return len;
    }
};
