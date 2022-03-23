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
    
    
    // bool traverse(TreeNode* root,TreeNode* parent){
    //     if(root==NULL) return true;
    //     bool b1=true,b2=true;
    //     if(root->left){
    //         if(root->left->val>=root->val) b1=false;
    //     }
    //     if(root->right){
    //         if(root->right->val<=root->val) b2=false;
    //     }
    //     return b1&&b2&&traverse(root->left,root) && traverse(root->right,root);
    // }
    
    
    bool validate(TreeNode * root, long long left_limit , long long right_limit){
        if(root==NULL) return true;
        bool b1=true,b2=true;
        if(root->val<=left_limit) b1=false;
        if(root->val>=right_limit) b2=false;
        return b1&&b2&&validate(root->right,root->val,right_limit) && validate(root->left,left_limit,root->val);
                    
    }
    
    
    bool isValidBST(TreeNode* root) {
        // if(!traverse(root,NULL)) return false;
        // bool b;
        return validate(root,LONG_MIN,LONG_MAX);
        // return b;
        
        
    }
};