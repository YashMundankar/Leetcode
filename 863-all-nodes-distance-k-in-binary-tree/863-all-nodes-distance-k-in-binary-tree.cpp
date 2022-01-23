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
    
    
    void parents(TreeNode* root,map<TreeNode*,TreeNode*>&m1){
        if(root==NULL) return;
        if(root->left) m1[root->left]=root;
        if(root->right) m1[root->right]=root;
        parents(root->left,m1);
        parents(root->right,m1);
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*>m1;
        vector<int> ans;
        if(root==NULL) return ans;
        parents(root,m1);
        int distance=0;
        queue<TreeNode*>q1;
        unordered_map<TreeNode*,bool>visited;
        visited[target]=true;
        q1.push(target);
        while(!q1.empty()){
            if(distance==k) break;
            int size=q1.size();
            for(int i=0;i<size;i++){
            TreeNode* node=q1.front();
            q1.pop();
            if(node->left){
                if(!visited[node->left]){
                q1.push(node->left);
                visited[node->left]=true;
                }
            }
            if(node->right){
                if( !visited[node->right]){
                q1.push(node->right);
                visited[node->right]=true;
                }
            }
            if(m1[node] && !visited[m1[node]]) {
                q1.push(m1[node]);
                visited[m1[node]]=true;
                
            }
            }
            distance++;
        }
        while(!q1.empty()){
            ans.push_back(q1.front()->val);
            q1.pop();
        }
        return ans;
    }
};