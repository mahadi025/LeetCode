#include <bits/stdc++.h>
using namespace std;

/*
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guess(int x)
    {
        return -1; // Demo guess() so that i dont get any error!!!. The actual guess function is implemented in the LeetCode..
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