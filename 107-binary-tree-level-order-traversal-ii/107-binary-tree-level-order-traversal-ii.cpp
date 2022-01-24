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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        stack<vector<int>>st;
        queue<TreeNode*>q1;
        q1.push(root);
        while(!q1.empty()){
            int size=q1.size();
            vector<int>lvl;
            for(int i=0;i<size;i++){
                TreeNode* node=q1.front();
                q1.pop();
                lvl.push_back(node->val);
                if(node->left) q1.push(node->left);
                if(node->right) q1.push(node->right);
            }
            st.push(lvl);
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
        
    }
};