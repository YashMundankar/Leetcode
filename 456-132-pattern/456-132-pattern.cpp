class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int thrd_ele=INT_MIN;
        stack<int>st;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<thrd_ele) return true;
            while(!st.empty() && nums[i]>st.top()){
                thrd_ele=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};