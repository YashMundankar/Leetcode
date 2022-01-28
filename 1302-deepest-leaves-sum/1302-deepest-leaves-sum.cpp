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
    int deepestLeavesSum(TreeNode* root) {
        int ans=0;
        if(root==NULL) return 0;
        queue<TreeNode*>q1;
        q1.push(root);
        while(true){
            int size=q1.size();
            vector<int>lvl;
            for(int i=0;i<size;i++){
                TreeNode* node=q1.front();
                q1.pop();
                lvl.push_back(node->val);
                if(node->left) q1.push(node->left);
                if(node->right) q1.push(node->right);
            }
            if(q1.empty()){
                for(auto i : lvl){
                    ans+=i;
                }
                break;
            }
        }
        return ans;
    }
};