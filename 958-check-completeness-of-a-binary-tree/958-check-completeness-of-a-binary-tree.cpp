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
    
    
    bool isCompleteTree(TreeNode* root) {      
        queue<TreeNode*>q1;
        q1.push(root);
        bool flag=false;
        while(!q1.empty()){
            TreeNode* node=q1.front();
            q1.pop();
            if(!node) flag=true;
            else{
                if(flag) return false;
                q1.push(node->left);
                q1.push(node->right);
            }
        }
        return true;
    }
};