class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m1;
        for(auto i: nums){
            m1[i]++;
            if(m1[i]>1){
                return true;
            }
        }
        return false;
        
    }
};