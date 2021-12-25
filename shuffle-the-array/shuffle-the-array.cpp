class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       for(int i=n;i<nums.size();i++){
           nums[i]=(nums[i]<<10)|nums[i-n];
       }
        int j=0;
        for(int i=n;i<nums.size();i++){
           nums[j]=nums[i]&1023;
            nums[j+1]=nums[i]>>10;
            j+=2;
       }
        return nums;
    
    }
};