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
    
    void func(TreeNode* root, int targetSum, int sum,bool &b){
        if(root==NULL) return;
        sum+=root->val;
        if(root->left==NULL && root->right==NULL && sum==targetSum){
            b=true;
        }
        func(root->left,targetSum,sum,b);
        func(root->right,targetSum,sum,b);
        
        
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool b=false;
        if(root==NULL) return b;
        func(root,targetSum,0,b);
        return b;
    }
};