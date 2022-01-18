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
    int sum=0;
    int func(TreeNode* root,int &mx){
          if(root==NULL) return 0;
        int ls=max(0,func(root->left,mx));
        int rs=max(0,func(root->right,mx));
        mx=max(mx,root->val + ls+rs);
        return root->val + max(ls,rs);
    }
    int maxPathSum(TreeNode* root) {
        int mx=INT_MIN;
        func(root,mx);
        return mx;
        
    }
};