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
    
    int func(TreeNode* root,int mn, int mx){
        if(root==NULL){
            return mx-mn;
        }
        mn=min(mn,root->val);
         mx=max(mx,root->val);
        return max(func(root->left,mn,mx),func(root->right,mn,mx));
    }
    int maxAncestorDiff(TreeNode* root) {
        return func(root,10000,0);
    }
};