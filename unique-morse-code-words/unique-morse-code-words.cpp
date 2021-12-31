class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>v1={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>s1;
        string op;
        for(auto i: words){
            op="";
            for(auto j : i){
                op+=v1[j-'a'];
                
            }
            s1.insert(op);
        }
        
        return s1.size();
        
    }
};