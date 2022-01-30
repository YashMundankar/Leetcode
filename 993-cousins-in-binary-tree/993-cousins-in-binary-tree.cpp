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
    
void  traverse(TreeNode* root,TreeNode* parent,int lvl,int x,int &xDepth,TreeNode* &xParent,int y,int &yDepth,TreeNode* &yParent){
        if(root==NULL) return ;
        if(root->val==x){
            xDepth=lvl;
            xParent=parent;
        }
        if(root->val==y){
             yDepth=lvl;
             yParent=parent;
            
        }
        traverse(root->left,root,lvl+1,x,xDepth,xParent,y,yDepth,yParent);
        traverse(root->right,root,lvl+1,x,xDepth,xParent,y,yDepth,yParent);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL) return false;
        int xDepth=-1,yDepth=-1;
        TreeNode* xParent=NULL;
        TreeNode* yParent=NULL;
        traverse(root,NULL,0,x,xDepth,xParent,y,yDepth,yParent);
        return (xDepth==yDepth && xParent!=yParent);
    }
};