class Solution {
public:
    int sum_F(vector<int>v1){
        int sum=0;
        for(auto i: v1){
            sum+=i;
            
        }
        return sum;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum=INT_MIN;
        for(auto i : accounts){
            max_sum=max(max_sum,sum_F(i));
        }
        return max_sum;
    }
};