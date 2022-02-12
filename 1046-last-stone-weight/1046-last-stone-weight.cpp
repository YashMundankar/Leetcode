class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
         priority_queue<int>q1;
         for(auto i: stones){
             q1.push(i);
         }
         
        while(q1.size()>1){
            int s1=q1.top();
            q1.pop();
            int s2=q1.top();
            q1.pop();
            q1.push(s1-s2);
        }
        return q1.top();
    }
};