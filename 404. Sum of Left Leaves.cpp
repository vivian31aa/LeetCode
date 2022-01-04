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
    int sum = 0;
    void traverse(TreeNode* node,int direction){
        if(node==nullptr)   return;
        if(node->left==nullptr && node->right==nullptr && direction==0){
            sum+=node->val;
        }
        traverse(node->left,0);
        traverse(node->right,1);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        traverse(root,1);
        return sum;
    }
};