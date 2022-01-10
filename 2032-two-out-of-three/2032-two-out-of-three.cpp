class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>a(101,0);
        vector<int>b(101,0);
        vector<int>c(101,0);
        
        
        for(auto i: nums1){
            a[i]++;
        }
        
        for(auto i: nums2){
            b[i]++;
        }
        
        for(auto i: nums3){
            c[i]++;
        }
        vector<int>ans;
        for(int i=0;i<101;i++){
            if(a[i]&& b[i]||b[i]&&c[i]||a[i]&&c[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};