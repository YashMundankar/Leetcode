class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_set<int>s1;
        for(auto i: nums1){
            s1.insert(i);
        }
        for(auto i: nums2){
            if(s1.find(i)!=s1.end()){
                ans.push_back(i);
                s1.erase(i);
            }
        }
        return ans;
    }
};