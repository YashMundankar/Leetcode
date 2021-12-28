class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int max_count=INT_MIN;
        for(auto i: s){
            if(i=='('){
                st.push('(');
            }
            else if(i==')'){
                st.pop();
            }
            int count=st.size();
            if(count>max_count){
                max_count=count;
            }
            
        }
        return max_count;
    }
};