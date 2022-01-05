class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>check(101,0);
        for(auto i: nums){
            check[i]++;
        }
        int sum=0;
        for(int i=0;i<check.size();i++){
            if(check[i]==1){
                sum+=i;
            }
        }
        return sum;
        
        
    }
};