class Solution {
public:
    int count_bits(int num){
        int count=0;
        while(num){
            if(num&1){
                count++;
            }
            num>>=1;
        }
        return count;
    }
    
    static bool func(pair<int ,int>p1,pair<int,int>p2){
        if(p1.first==p2.first){
            return p1.second<p2.second;
        }
        return p1.first<p2.first;
    }
   
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>m1;
        for(auto i : arr){
            m1.push_back({count_bits(i),i});
        }
        
        sort(m1.begin(),m1.end(),func);
        vector<int>ans;
        for(auto i: m1){
            ans.push_back(i.second);
        }
        return ans;
    }
};