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
    
    int pow(int val, int p ){
        if(p==0){
            return 1;
        }
        return val*pow(val,p-1);
    }
    
    int cal_h_left(TreeNode *root){
        int n=0;
        while(root!=NULL){
            root=root->left;
            n++;
        }
        return n;
    }
     int cal_h_right(TreeNode *root){
        int n=0;
        while(root!=NULL){
            root=root->right;
            n++;
        }
        return n;
    }
    
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int leftH=cal_h_left(root);
        int rightH=cal_h_right(root);
        if(leftH==rightH){
            return (pow(2,leftH))-1;
        }
        return 1 + countNodes(root->left) +countNodes(root->right);
    }
};