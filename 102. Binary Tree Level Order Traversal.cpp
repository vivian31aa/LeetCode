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
    vector<vector<int>> ans;
    
    void build(TreeNode* node, int depth){
        if(node==NULL) return;
        if(ans.size()==depth)   ans.push_back(vector<int>());
        
        ans[depth].push_back(node->val);
        build(node->left,depth+1);
        build(node->right,depth+1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        build(root,0);
        return ans;
    }
};