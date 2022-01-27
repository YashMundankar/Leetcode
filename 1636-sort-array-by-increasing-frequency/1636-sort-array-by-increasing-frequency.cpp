class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>m1;
        for(auto i:nums){
            m1[i]++;
        }
        sort(nums.begin(),nums.end(),[&](int num1 ,int num2){
            if(m1[num1]==m1[num2]) return num1>num2;
            return m1[num1]<m1[num2];
        });
        return nums; 
    }
};