class Solution {
public:
    
    
    map<char,int> func(string s){
       map<char,int>m;
        for(auto i: s){
            m[i]++;
        }
        return m;
        
        
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<map<char,int>,vector<string>>m1;
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