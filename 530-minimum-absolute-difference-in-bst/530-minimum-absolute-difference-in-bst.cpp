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
    
    
    void traverse(TreeNode* root,int &prev,int &mn){
        if(root==NULL) return;
        traverse(root->left,prev,mn);
        if (prev >= 0) mn = min(mn, root->val - prev);
        prev=root->val;
        traverse(root->right,prev,mn);
    }
    
    
    int getMinimumDifference(TreeNode* root) {
        int mn=INT_MAX,prev=-1;
        traverse(root,prev,mn);
        return mn;
        
    }
};