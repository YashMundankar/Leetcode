class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) 
    {
     map<string,int>m1;   
     map<string,int>m2;
     for(auto i : words1){
         m1[i]++;
     }
    for(auto i : words2){
         m2[i]++;
     }
     int ans=0;   
    for(auto i : m1){
        if(m1[i.first]){
            if(m2[i.first]){}
            if(m1[i.first]==1&&m1[i.first]==m2[i.first]) ans++;
        }
    }
        return ans;
    }
};