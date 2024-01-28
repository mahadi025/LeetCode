#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int guess(int x)
    {
        return -1;
    }
    int guessNumber(int n)
    {
        int high = n;
        int low = 1;
        while (high >= low)
        {
            int mid = low + (high - low) / 2;
            if (guess(mid) == 0)
                return mid;
            else if (guess(mid) == -1)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;
    }
};