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
    
    void traverse(TreeNode* root,vector<int>&v1){
        if(root==NULL) return;
        traverse(root->left,v1);
        v1.push_back(root->val);
        traverse(root->right,v1);
    }
    
    
    
    void fixIt(TreeNode* root,vector<int>v1,int &i){
        if(root==NULL) return;
        if(root->left) fixIt(root->left,v1,i);
        root->val=v1[i];
        i++;
        if(root->right)fixIt(root->right,v1,i);
    }
    
    void recoverTree(TreeNode* root) {
        vector<int>v1;
        traverse(root,v1);
        sort(v1.begin(),v1.end());
        int i=0;
        fixIt(root,v1,i);
        return ;
        
        
    }
};