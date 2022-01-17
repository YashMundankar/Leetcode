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
    
    int func(TreeNode* root,bool &b){
        if(root==NULL){
            return 0;
        }
        int lh=func(root->left,b);
        int rh=func(root->right,b);
        if(abs(lh-rh)>1) b=false;
        
        return 1+max(rh,lh);
        
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        bool b=true;
        func(root,b);
        return b;
        
    }
};