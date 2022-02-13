class Solution {
public:
    
    void recurrsive(vector<vector<int>>&s1,vector<int>nums,vector<int>op){
        if(nums.size()==0){
            s1.push_back(op);
            return;
        }
        int temp=nums[0];
        auto nums2=vector<int>(nums.begin()+1,nums.end());
        recurrsive(s1,nums2,op);
        op.push_back(temp);
        recurrsive(s1,nums2,op);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>s1;
        vector<int>op;
        recurrsive(s1,nums,op);
        return s1;
    }
};