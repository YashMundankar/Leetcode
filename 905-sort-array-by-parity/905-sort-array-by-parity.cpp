class Solution {
public:
      vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
          if(nums[i]&1){
              int temp=nums[i];
              nums[i]=nums[j];
              nums[j]=temp;
              j--;
          }
            else{
                i++;
            }
        }
          return nums;
        
    }
};