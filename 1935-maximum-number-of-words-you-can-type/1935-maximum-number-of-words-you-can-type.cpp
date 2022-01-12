class Solution {
public:
    
    int func(string s1,string s2){
        vector<bool>c(27,false);
        for(auto i : s1){
            c[i-'a']=true;
        }
        for(auto i : s2){
            if(c[i-'a']){
                return 0;
            };
        }
        return 1;
    }
    
    int canBeTypedWords(string text, string brokenLetters) {
        int count=0;
        string token;
        stringstream ss(text);
        while(getline(ss,token,' ')){
            count+=func(token,brokenLetters);
        }
        
        return count;
        
    }
};