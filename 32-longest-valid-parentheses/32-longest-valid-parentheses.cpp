class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int ans=0;
        int k=-1;
        for(auto i : s){
            k++;
            if(i=='(')st.push(k);
            else{
                st.pop();
                if(st.empty()) st.push(k);
                ans=max(ans,k-st.top());
            }
        }
        return ans;
        
    }
};