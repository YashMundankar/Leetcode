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
    
    void preorder(TreeNode* root , vector<int>&ans,int lvl){
        if(root==NULL) return;
        if(ans.size()==lvl) ans.push_back(root->val);
        // reverse preorder
        preorder(root->right,ans,lvl+1);
        preorder(root->left,ans,lvl+1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL) return ans;
       preorder(root,ans,0);
        return ans;
        
    }
};