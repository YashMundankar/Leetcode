class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>check1(27,0);
        //vector<int>check2(27,0);
        for(auto i : s){
            check1[i-'a']+=1;
        }
         for(auto i : t){
            check1[i-'a']-=1;
        }
        char ch;
        for(int i=0;i<27;i++){
            if(check1[i]){
                ch=char(i+97);
            }
        }
        return ch;
    }
};