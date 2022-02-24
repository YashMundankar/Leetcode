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
    
    void traverse(TreeNode* root, int & ans,int lvl){
        if(!root->right && !root->left){
            ans=min(ans,lvl);
            return;
        }
        if(root->left) traverse(root->left,ans,lvl+1);
        if(root->right) traverse(root->right,ans,lvl+1);
        
    }
    
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int ans=INT_MAX;
        traverse(root,ans,0);
        return ans+1;
    }
};