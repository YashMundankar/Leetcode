class Solution {
public:
    
    
    map<string,int>m1;
    bool compare(pair<int,string>p1,pair<int,string>p2){
        if(p1.first==p2.first) return p1.second<p2.second;
        return p1.first>p2.first;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        for(auto i: words) m1[i]++;
        vector<pair<string,int>>v1(m1.begin(),m1.end());
        vector<string>ans;
        sort(v1.begin(),v1.end(),[&](pair<string,int>s1, pair<string,int>s2){
            if(s1.second==s2.second) return s1.first<s2.first;
            return s1.second>s2.second;
        });
        int i=0;
        for(auto it : v1 ){
            if(i==k) break;
            ans.push_back(it.first);
            i++;
        }
        // return words;
        return ans;
    }
};