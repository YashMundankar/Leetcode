class Solution {
public:
    string toLowerCase(string s) {
        string op;
        char ch;
        for(auto i: s){
            int num=i;
            if(65<=num && num<=90){
                num+=32;
                ch=char(num);
            }
            else ch=i;
            op+=ch;
        }
        return op;
        
    }
};