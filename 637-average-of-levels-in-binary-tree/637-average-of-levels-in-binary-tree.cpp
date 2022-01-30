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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v1;
        if(root==NULL) return v1;
        queue<TreeNode*>q1;
        q1.push(root);
        while(!q1.empty()){
            double size=q1.size();
            double sum=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q1.front();
                q1.pop();\
                sum+=node->val;
                if(node->left) q1.push(node->left);
                if(node->right) q1.push(node->right);
            }
            v1.push_back(sum/(size+0.00000));
        }
        return v1;
        
    }
};