class Solution {
public:
    
    int func(string s1,vector<bool>c){
        for(auto i : s1){
            if(c[i-'a']){
                return 0;
            };
        }
        return 1;
    }
    
    int canBeTypedWords(string text, string brokenLetters) {
        int count=0;
        vector<bool>c(27,false);
         for(auto i : brokenLetters){
            c[i-'a']=true;
            }
        string token;
        stringstream ss(text);
        while(getline(ss,token,' ')){
            count+=func(token,c);
        }
        
        return count;
        
    }
};