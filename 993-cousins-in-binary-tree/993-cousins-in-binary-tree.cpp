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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL) return false;
        queue<TreeNode*>q1;
        q1.push(root);
        bool found_x=false, found_y=false; 
        while(!q1.empty()){
            int size=q1.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q1.front();
                q1.pop();
                if(node->left && node->right){
                if(node->left->val==x && node->right->val==y || node->left->val==y && node->right->val==x ) return false;
                }
                if(node->val==x) found_x=true;
                if(node->val==y) found_y=true;
                if(node->left) q1.push(node->left);
                if(node->right) q1.push(node->right);
            }
            
            if(found_x && found_y){
                return true;
            }
            if(found_x || found_y){
                return false;
            }
            
        }
        return false;
    }
};