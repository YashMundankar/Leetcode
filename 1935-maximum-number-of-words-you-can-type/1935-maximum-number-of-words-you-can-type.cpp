class Solution {
public:
    
    int func(string s1,int num){
        for(auto i : s1){
            if(1<<i-'a'& num){
                return 0;
            };
        }
        return 1;
    }
    
    int canBeTypedWords(string text, string brokenLetters) {
        int count=0;
        int num=0;
         for(auto i : brokenLetters){
            num|=1<<i-'a';
            }
        string token;
        stringstream ss(text);
        while(getline(ss,token,' ')){
            count+=func(token,num);
        }
        
        return count;
        
    }
};