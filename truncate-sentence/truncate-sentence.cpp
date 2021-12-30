class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string op;
        string token;
        while(getline(ss,token,' ')){
            if(!k){
                break;
            }
            op+=token+' ';
            k--;
        }
        op.pop_back();
        return op;
    }
};