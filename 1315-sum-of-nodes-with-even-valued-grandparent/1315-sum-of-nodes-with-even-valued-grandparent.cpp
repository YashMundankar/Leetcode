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
    
    void traverse(TreeNode* child,TreeNode* parent,TreeNode* grandparent,int &sum){
        if(child==NULL) return;
        if(grandparent!=NULL && grandparent->val%2==0) sum+=child->val;
        traverse(child->left,child,parent,sum);
        traverse(child->right,child,parent,sum);
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        int sum=0;
        traverse(root,NULL,NULL,sum);
        return sum;
    }
};