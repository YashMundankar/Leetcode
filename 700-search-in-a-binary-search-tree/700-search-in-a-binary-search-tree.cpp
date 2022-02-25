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
    
    void func(TreeNode* root,int val,TreeNode* &p){
        if(root==NULL) return;
        if(root->val==val) p=root;
        if(root->val>val) func(root->left,val,p);
        if(root->val<val)func(root->right,val,p);
    }
    
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* p=NULL;
        func(root,val,p);
        return p;
    }
};