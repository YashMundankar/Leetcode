class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
       
        priority_queue<int>q1;
        for(auto i: nums){
            q1.push(i);
        }
        int mn1,mn2,m1,m2;
        mn1=q1.top();
        q1.pop();
        mn2=q1.top();
        while(q1.size()>2){
            q1.pop();
        }
        m1=q1.top();
        q1.pop();
        m2=q1.top();
        
        return (mn1*mn2)-(m1*m2);
        

        
        
    }
};