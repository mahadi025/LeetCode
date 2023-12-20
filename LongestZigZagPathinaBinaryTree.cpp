#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int maxdepth = 0;
    void solve(TreeNode *root, bool Direction, int depth)
    {
        if (root == NULL)
        {
            return;
        }
        if (Direction)
        {
            solve(root->left, false, depth + 1);
            solve(root->right, true, 1);
        }
        else
        {
            solve(root->right, true, depth + 1);
            solve(root->left, false, 1);
        }
        maxdepth = max(maxdepth, depth);
    }
    int longestZigZag(TreeNode *root)
    {
        solve(root, true, 0);
        solve(root, true, 0);
        return maxdepth;
    }
};
