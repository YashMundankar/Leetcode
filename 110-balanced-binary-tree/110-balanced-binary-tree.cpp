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
    
    int func(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lh=func(root->left);
        int rh=func(root->right);
        
        return 1+max(rh,lh);
        
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        
         int lh=func(root->left);
         int rh=func(root->right);
        
        if(abs(lh-rh)>1) return false ;
        
        bool lb=isBalanced(root->left);
        bool rb=isBalanced(root->right);
        
        if(lb&&rb) return true;
        
        return false;
        
    }
};