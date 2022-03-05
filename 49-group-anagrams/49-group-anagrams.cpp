class Solution {
public:
    
    
    string func(string s){
       sort(s.begin(),s.end());
        return s;
        
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>m1;
        for(auto i: strs){
            if(m1.find(func(i))!=m1.end()) m1[func(i)].push_back(i);
            else{
                vector<string>s;
                s.push_back(i);
                m1.insert({func(i),s});
            }
        }
        for(auto i: m1){
            ans.push_back(i.second);
        }
        
        return ans;
    }
};