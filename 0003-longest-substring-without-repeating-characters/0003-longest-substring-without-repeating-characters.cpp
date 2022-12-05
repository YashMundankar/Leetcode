class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
         unordered_set<char>st;
        int ans=0;
        while(i<s.length()&&j<s.length()){
            if(st.find(s[j])==st.end() && j<s.size()){
                st.insert(s[j]);
                if(ans<st.size())ans=st.size();
                // cout<<st.size()<<endl;
                j++;
            }
            else{
                st.erase(s[i]);
                // cout<<s[i]<<endl;
                i++;
            }
            
        }
        // cout<<"dfdfdk"<<endl;
        return ans;
        
    }
};