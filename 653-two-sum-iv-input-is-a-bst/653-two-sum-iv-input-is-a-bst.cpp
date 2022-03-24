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
    
    void traverse(TreeNode* root,int k, unordered_set<int>&s1,bool &b){
        if(root==NULL) return;
        traverse(root->left,k,s1,b);
        if(s1.find(k-root->val)!=s1.end()) b=true;
        s1.insert(root->val);
        traverse(root->right,k,s1,b);
        
    }
    
    
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int>s1;
        bool b=false;
        traverse(root,k,s1,b);
            return b;
    }
};