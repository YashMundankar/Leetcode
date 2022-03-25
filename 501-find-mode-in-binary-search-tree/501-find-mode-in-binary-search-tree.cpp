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
    
    void traverse(TreeNode* root,map<int,int>&m1){
        if(root==NULL) return;
        traverse(root->left,m1);
        m1[root->val]++;
        traverse(root->right,m1);
        
    }
    
    vector<int> findMode(TreeNode* root) {
     map<int,int>m1;
     traverse(root,m1);
     int freq=0;
     for(auto i : m1){
         if(freq<i.second) {
             freq=i.second;
         }
     }
    vector<int>ans;
    for(auto i: m1){
        if(i.second==freq) ans.push_back(i.first);
    }   
        return ans;
    }
    
};