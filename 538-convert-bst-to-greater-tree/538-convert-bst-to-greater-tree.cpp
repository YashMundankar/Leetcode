// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
    
//     void traverse(TreeNode* root, int &sum){
//         if(root==NULL){
//             return; 
//         }
        
//         traverse(root->left,sum);
//         sum+=root->val;
//         traverse(root->right,sum);
//     }
    
//     void update(TreeNode* root,int sum){
//          if(root==NULL){
//             return; 
//         }
        
//         update(root->left,sum);
//         root->val=sum;
//         sum-=root->val;
//         update(root->right,sum);
         
// }
    
    
    
//     TreeNode* convertBST(TreeNode* root) {
//         int sum=0;
//         traverse(root,sum);
//         update(root,sum);
//         return root;
//     }
// };



class Solution {
public:
    
 int sum=0;
    
    
    
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL){
             return NULL; 
        }
        convertBST(root->right);
        sum=root->val+sum;
        root->val=sum;
        convertBST(root->left);
        return root;
    }
};