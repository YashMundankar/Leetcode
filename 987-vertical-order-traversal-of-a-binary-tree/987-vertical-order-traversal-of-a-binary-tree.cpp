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
    
    void traverse(TreeNode* root,int vertical ,int lvl ,map<int,map<int,multiset<int>>>&m1){
        if(root==NULL) return;
        m1[vertical][lvl].insert(root->val);
        traverse(root->left,vertical-1,lvl+1,m1);
        traverse(root->right,vertical+1,lvl+1,m1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    vector<vector<int>>ans;
    if(root==NULL) return ans;
    map<int,map<int,multiset<int>>>m1;
    traverse(root,0,0,m1);
    for(auto i : m1){
        vector<int>col;
        for(auto j :i.second ){
            col.insert(col.end(),j.second.begin(),j.second.end());
        }
        ans.push_back(col);
    }
        return ans;
    }
};