class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>check(27,0);
        for(auto i : s){
            check[i-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(check[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
        
    }
};