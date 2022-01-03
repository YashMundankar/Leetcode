class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==2){
            return (nums[0]-1)*(nums[1]-1);
        }
        priority_queue<int>q1;
        for(auto i: nums){
            q1.push(i);
        }
        
        int num1=q1.top()-1;
        q1.pop();
        int num2=q1.top()-1;
        return num1*num2;
    }
};