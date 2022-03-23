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
    
    
    TreeNode* find(TreeNode* root){
        if(root->right==NULL){
            return root;
        }
        return find(root->right);
    }
    
    TreeNode* helper(TreeNode* root){
        if(root->left==NULL){
            return root->right;
        }
        else if(root->right==NULL){
            return root->left;
        }
        TreeNode* lastRight=find(root->left);
        lastRight->right=root->right;
        return root->left;
    }
    
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* dummyroot=root;
        if(root==NULL) return NULL;
        if(root->val==key){
            return helper(root);
        }
        while(dummyroot!=NULL){
            if(key>dummyroot->val){
                if(dummyroot->right && dummyroot->right->val==key){
                    dummyroot->right=helper(dummyroot->right);
                    break;
                }
                else{
                    dummyroot=dummyroot->right;
                }
            }
            else{
                if(dummyroot->left && dummyroot->left->val==key){
                    dummyroot->left=helper(dummyroot->left);
                    break;
                }
                else{
                    dummyroot=dummyroot->left;
                }
            }
        }
        return root;
        
    }
    
    
    
};