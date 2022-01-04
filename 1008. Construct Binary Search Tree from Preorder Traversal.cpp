/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 TreeNode *bstFromPreorder(vector<int> &preorder)
    {
        return build(preorder, 0, preorder.size());
    }
    TreeNode* build(vector<int> &preorder, int l, int r)
    {
        if (l >= r)
            return nullptr;
        auto root = new TreeNode(preorder[l]);
        int i = l;
        while (i < r && root->val >= preorder[i])
        {
            i++;
        }
        root->left = build(preorder, l + 1, i);
        root->right = build(preorder, i, r);
        return root;
    }
};