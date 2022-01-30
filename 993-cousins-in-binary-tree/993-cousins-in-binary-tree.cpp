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
    
   void  traverse(TreeNode* root,TreeNode* parent, int lvl,int x, int y,map<int,pair<TreeNode*,int>>&m1){
        if(root==NULL) return ;
        if(root->val==x) m1[x]={parent,lvl};
        if(root->val==y) m1[y]={parent,lvl};
        traverse(root->left,root,lvl+1,x,y,m1);
        traverse(root->right,root,lvl+1,x,y,m1);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL) return false;
        map<int,pair<TreeNode*,int>>m1;
        int lvl=0; 
        traverse(root,NULL,lvl,x,y,m1);
        if(m1[x].first!=m1[y].first && m1[x].second==m1[y].second) return true;
        return false;
    }
};