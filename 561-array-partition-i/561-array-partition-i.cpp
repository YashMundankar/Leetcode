class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        priority_queue<int>mx;
        for(auto i: nums){
            mx.push(i);
        }
        int sum=0;
        while(!mx.empty()){
            mx.pop();
            sum+=mx.top();
            mx.pop();
        }
        
        return sum;
        
    }
};