class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        vector<int>ans(101,0);
        int count=0;
        for(auto i: nums)
        {
            ans[i]++;
            if(i-k>0){
                count+=ans[i-k];
            }
            if(i+k<101){
                count+=ans[i+k];
            }
        }
        return count;
    }
};