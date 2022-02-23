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
    
    int convert(string s){
        int len=s.length();
        len--;
        int ans=0;
        for(auto i:s){
            if(i=='1') ans=ans|(1<<len);
            len--;
        }
        return ans;
    }
    void traverse(TreeNode* root,string op,vector<string>&v1){
        if(root->left==NULL && root->right==NULL){
            op+=to_string(root->val);
            v1.push_back(op);
            return;
        }
        op+=to_string(root->val);
        if(root->left)traverse(root->left,op,v1);
        if(root->right)traverse(root->right,op,v1);
        
    
        
    }
    
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        if(root==NULL) return sum;
        vector<string>v1;
        traverse(root,"",v1);
        for(auto i: v1){
            sum+=convert(i);
        }
        return sum;
    }
};