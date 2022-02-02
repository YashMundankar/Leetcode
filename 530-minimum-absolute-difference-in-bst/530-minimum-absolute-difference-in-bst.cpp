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
        v1.push_back(root->val);
        traverse(root->left,v1);
        traverse(root->right,v1);
    }
    
    
    int getMinimumDifference(TreeNode* root) {
        vector<int>v1;
        int mn=INT_MAX;
        traverse(root,v1);
        sort(v1.begin(),v1.end());
        for(int i=1;i<v1.size();i++){
            mn=min(mn,v1[i]-v1[i-1]);
        }
        return mn;
        
    }
};