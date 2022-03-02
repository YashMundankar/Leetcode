class Solution {
public:
    bool isSubsequence(string s, string t) {
        int check1=s.length();
        int check2=t.length();
        if(!check1) return true;
        int i=0,j=0;
        while(i<check1 && j<check2){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(check1==i){
            return true;
        }
        return false;
    }
};