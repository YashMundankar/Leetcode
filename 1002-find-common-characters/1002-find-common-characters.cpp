class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        vector<int>mnCount(26,INT_MAX);
        for(auto i: words){
            vector<int>tempCount(26,0);
            for(auto j: i)
                tempCount[j-'a']++;
            for(int k=0;k<26;++k) mnCount[k]=min(mnCount[k],tempCount[k]);
                
            
        }
        vector<string>ans;
    for (auto i = 0; i < 26; ++i)
        for (auto j = 0; j < mnCount[i]; ++j) ans.push_back(string(1, i + 'a'));
    return ans;
     
    }
};