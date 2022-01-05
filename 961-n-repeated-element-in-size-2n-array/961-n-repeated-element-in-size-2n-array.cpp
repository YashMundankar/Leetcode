class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int>s1;
        for(auto i: nums){
            if(s1.find(i)!=s1.end()){
                return i;
            }
            s1.insert(i);
        }
        return -1;
        
    }
};