class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>s1;
        for(auto i: nums){
            s1.insert(i);
            }
        
        return !(nums.size()==s1.size());
        
}
};