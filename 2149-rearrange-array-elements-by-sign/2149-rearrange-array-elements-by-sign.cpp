class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     vector<int>ans(nums.size(),0);
     int j=0,k=1;
     for(auto i: nums){
         if(i>0){
             ans[j]=i;
             j+=2;
         }
         else if(i<0){
             ans[k]=i;
             k+=2;
         }
     }
    return ans;
    }
};