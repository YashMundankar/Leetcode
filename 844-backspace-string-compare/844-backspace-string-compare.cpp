class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>s1;
        vector<char>t1;
        for(auto i: s){
            if(i=='#')
                 if(s1.size()==0) continue;
                 else s1.pop_back();
            else s1.push_back(i);
        }
        for(auto i: t){
            if(i=='#') 
                if(t1.size()==0) continue;
                else t1.pop_back();
            else t1.push_back(i);
        }
        return s1==t1;
        
    }
};