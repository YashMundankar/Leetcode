class Solution {
public:
    void tokenize(string s, vector<string> &v1){
        stringstream ss(s);
        string token;
        while(getline(ss,token,' ')){
            v1.push_back(token);
        }
    }
    
    static bool sort_f(string s1,string s2){
        return s2[s2.length()-1]>s1[s1.length()-1];
    }
    string sortSentence(string s) {
        string op;
        vector<string>v1;
        tokenize(s,v1);
        sort(v1.begin(),v1.end(),sort_f);
        for(auto i: v1){
            i.pop_back();
            op=op+i+" ";
        }
        op.pop_back();
        return op;
        
    }
};