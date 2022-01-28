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
    
    void traverse(TreeNode* root,int lvl,int &deepest_lvl,int &sum){
        if(root==NULL) return;
        if(!root -> left && !root -> right) {
		if(lvl == deepest_lvl) sum += root -> val;
        else if(lvl > deepest_lvl) sum = root -> val, deepest_lvl=lvl;
        }
        traverse(root->left,lvl+1,deepest_lvl,sum);
        traverse(root->right,lvl+1,deepest_lvl,sum);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL) return 0;
        int sum=0,deepest_lvl=0;
        traverse(root,0,deepest_lvl,sum);
        return sum;
    }
};