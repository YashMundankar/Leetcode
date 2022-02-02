class Solution {
public:
    bool isAnagram(string s, string t)
    {
        vector<int>b1(27,0);
        for(auto i : s){
            b1[i-'a']++;
        }
        
        for(auto i : t){
            b1[i-'a']--;
        }
        
        for(auto i : b1) {
            if(i) return false;
        }
        
        return true;
        
    }
};