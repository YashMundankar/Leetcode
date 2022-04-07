class Solution {
public:
      vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
         vector<int>odd;
          vector<int>e;
          for(auto i : nums){
              if(i&1) odd.push_back(i);
              else e.push_back(i);
          }
          for(auto i : e) ans.push_back(i);
          for(auto i : odd) ans.push_back(i);
          return ans;
        
    }
};