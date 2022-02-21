class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m1;
        for(auto i : nums){
            m1[i]++;
        }
        float c=nums.size()/2.00;
        for(auto it: m1){
            if(it.second/1.00>c){
                return it.first;
            }
        }
        return -1;
        
    }
};