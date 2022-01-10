class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>a(101,0);
       for(auto i: nums1) a[i]=a[i]|1<<0;
        for(auto i: nums2) a[i]=a[i]|1<<1;
        for(auto i: nums3) a[i]=a[i]|1<<2;
        vector<int>ans;
       for (int i = 1; i <= 100; i++) if (a[i] == 3 || a[i] >= 5) ans.push_back(i);
        
        return ans;
    }
};