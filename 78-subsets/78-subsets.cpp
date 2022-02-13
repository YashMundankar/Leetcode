class Solution {
public:
    
    void recurrsive(vector<vector<int>>&s1,vector<int>nums,vector<int>op,int i){
        if(i==nums.size()){
            s1.push_back(op);
            return;
        }
        int temp=nums[i];
        //auto nums2=vector<int>(nums.begin()+1,nums.end());
        recurrsive(s1,nums,op,i+1);
        op.push_back(temp);
        recurrsive(s1,nums,op,i+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>s1;
        vector<int>op;
        recurrsive(s1,nums,op,0);
        return s1;
    }
};