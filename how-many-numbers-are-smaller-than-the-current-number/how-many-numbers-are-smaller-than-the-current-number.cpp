class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans(101,0);
        vector<int>output;
        for(auto i: nums){
            ans[i]++;
        }
        for(int i=1;i<101;i++){
            ans[i]+=ans[i-1];
        }
        for(auto i : nums){
            if(i==0){
                output.push_back(0);
            }
            else{
            output.push_back(ans[i-1]);
            }
        }
        
        return output;
    }
};