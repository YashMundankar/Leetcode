class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans(101,0);
        for(auto i: nums){
            ans[i]++;
        }
        int target_count=ans[target],sum=0;
        while(target--){
            sum=sum+ans[target];
        }
        
        vector<int>op;
        while(target_count--){
            op.push_back(sum);
            sum++;
        }
        return op;
    }
};