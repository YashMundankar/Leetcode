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
    
    void level_order(TreeNode* root, vector<int>&v1){
        if(root==NULL) return;
        queue<TreeNode*>q1;
        q1.push(root);
        while(!q1.empty()){
            int size=q1.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q1.front();
                q1.pop();
                v1.push_back(node->val);
                if(node->left) q1.push(node->left);
                if(node->right) q1.push(node->right);
            }
        }
    }
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        vector<int>v1;
        level_order(root,v1);
        return v1.size();
        
    }
};