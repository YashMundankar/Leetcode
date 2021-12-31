class Solution {
public:
    
    char shift(int a, int val){
        a+=val;
        char ch=a;
        return ch;
    }
    
    string replaceDigits(string s) {
        string op;
        for(int i=0;i<s.length();i++){
            if(i&1){
                op+=shift(s[i-1],s[i]-'0');
                
            }
            else{
                op+=s[i];
            }
        }
        return op;
        
    }
};