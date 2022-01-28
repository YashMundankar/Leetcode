/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    void traverse(TreeNode* original, TreeNode* cloned, TreeNode* &target){
        if(original==NULL && cloned ==NULL) return;
        if(original==target){ target=cloned ; return;}
        traverse(original->left,cloned->left,target);
        traverse(original->right,cloned->right,target);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==NULL || cloned==NULL || target==NULL) return NULL;
        traverse(original,cloned,target);
        return target;
        
    }
};