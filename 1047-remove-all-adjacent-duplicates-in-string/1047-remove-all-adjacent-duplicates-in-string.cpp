class Solution {
public:
    string removeDuplicates(string s) {
        string op;
        for(int i=0;i<s.length();i++){
            int j=op.length();
            if(op.length()==0){
                op.push_back(s[i]);
            }
            else if(s[i]==op[j-1]){
                op.pop_back();
            }
            else{
                op.push_back(s[i]);
            }
        }
        return op;
        
    }
};