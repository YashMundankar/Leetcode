class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sum=0;
        if(nums.size()==1){
            return 0; 
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
                sum+=nums[i-1]-nums[i]+1;
                nums[i]+=nums[i-1]-nums[i]+1;
            }
            
        }
        return sum;
    }
};