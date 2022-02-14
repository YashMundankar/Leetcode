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
    
    void traverse(TreeNode* root, vector<string>&s1,string op){
        if(!root->left && !root->right){
            s1.push_back(op+to_string(root->val));
            return;
        }
        op+=to_string(root->val)+"->";
        if(root->left) traverse(root->left,s1,op);
        if(root->right) traverse(root->right,s1,op);
    }
    
    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string>s1;
        traverse(root,s1,"");
        
        return s1;
        
    }
};