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
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,  int& rootNum, int left, int right){
        if(left>right)  return NULL;
        int pivot=left;
        while(inorder[pivot]!=preorder[rootNum]){
            pivot++;
        }
        
        TreeNode* node = new TreeNode(preorder[rootNum]);
        rootNum++;
        node->left = build(preorder, inorder, rootNum, left, pivot-1);
        node->right = build(preorder, inorder, rootNum, pivot+1, right);
        return node;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootNum=0;
        return build(preorder, inorder , rootNum, 0, preorder.size()-1);
    }
};