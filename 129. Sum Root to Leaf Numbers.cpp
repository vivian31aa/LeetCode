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
    int ans=0;
    int traverse(TreeNode* node, int num){
        if(node==nullptr)   return 0;
        num=num*10+node->val;
        if(node->left!=nullptr||node->right!=nullptr){
            traverse(node->left,num);
            traverse(node->right,num);
        }
        else{
            ans+=num;
        }
        return ans;
    }
    int sumNumbers(TreeNode* root) {
        return traverse(root,0);
    }
};