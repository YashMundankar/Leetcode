class Solution {
public:
    string defangIPaddr(string address) {
        string op="";
        for(auto i: address){
            if(i=='.'){
                op=op+"[.]";
            }
            else{
                op+=i;
            }
        }
        return op;
        
    }
};