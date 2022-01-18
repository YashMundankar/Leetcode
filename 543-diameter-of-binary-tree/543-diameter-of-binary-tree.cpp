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
    int mx=0;
    int func(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        return 1+max(func(root->left),func(root->right));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int lh=func(root->left);
        int rh=func(root->right);
        
        if(lh+rh>mx) mx=lh+rh;
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        
        return mx;
        
    }
};