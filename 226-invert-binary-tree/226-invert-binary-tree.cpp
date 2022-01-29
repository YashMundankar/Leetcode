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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;
        if(root->left && root->right){
            TreeNode* node=root->left;
            root->left=root->right;
            root->right=node;
        }
        else if(!root->left && root ->right){
            root->left=root->right;
            root->right=NULL;
        } 
          else if(root->left && !root ->right){
            root->right=root->left;
            root->left=NULL;
        } 
        
        invertTree(root->left);
        invertTree(root->right);
        return root;
        
        
    }
};