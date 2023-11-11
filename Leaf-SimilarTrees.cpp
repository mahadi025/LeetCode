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
    vector<int> rootData;
    void getLeafNodes(TreeNode *root)
    {
        if (!root)
            return;
        if (!root->left && !root->right)
        {
            rootData.push_back(root->val);
            return;
        }
        if (root->left)
            getLeafNodes(root->left);
        if (root->right)
            getLeafNodes(root->right);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> rootData1;
        vector<int> rootData2;
        getLeafNodes(root1);
        rootData1 = rootData;
        rootData.clear();
        getLeafNodes(root2);
        rootData2 = rootData;

        if (rootData1 == rootData2)
            return true;
        else
            return false;
    }
};

int main()
{
    // Solved it on the LeetCode......
}