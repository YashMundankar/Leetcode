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
    
    void traverse(TreeNode* root, vector<int>&ans){
        if(root==NULL) return;
        traverse(root->left,ans);
        ans.push_back(root->val);   //inorder
        traverse(root->right,ans);
    }
    
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans1;
        vector<int>ans2;
        traverse(root1,ans1);
        traverse(root2,ans2);
        vector<int>final_ans;
        int i=0,j=0;
        while(i<ans1.size()&& j<ans2.size()){  //merge two sorted arrays
            if(ans1[i]<ans2[j]) {final_ans.push_back(ans1[i]);
                                 i++;}
            else {
                final_ans.push_back(ans2[j]);
                j++;
            }
        }
        while(i<ans1.size()){
            final_ans.push_back(ans1[i]);
            i++;
        }
        while(j<ans2.size()){
            final_ans.push_back(ans2[j]);
            j++;
        }
        return final_ans;
        
    }
};