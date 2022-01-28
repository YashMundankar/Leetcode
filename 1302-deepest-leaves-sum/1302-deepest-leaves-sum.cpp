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
    
    void traverse(TreeNode* root,int lvl,map<int,int>&m1){
        if(root==NULL) return;
        m1[lvl]+=root->val;
        traverse(root->left,lvl+1,m1);
        traverse(root->right,lvl+1,m1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL) return 0;
        map<int,int>m1;
        traverse(root,0,m1);
        auto it=m1.end();
        it--;
        return it->second;
    }
};