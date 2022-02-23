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
    
    int func(TreeNode* root,int val){
        if(!root) return 0;
        val=(val*2)+root->val;
        if(root->left==root->right) return val;
        return func(root->left,val)+func(root->right,val);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        return func(root,0);
    }
};