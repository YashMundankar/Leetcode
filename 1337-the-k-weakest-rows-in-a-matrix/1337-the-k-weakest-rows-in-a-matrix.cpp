class Solution {
public:
    
    int cal_civilian(vector<int>v1){
        int count=0;
        for(auto i: v1){
            if(!i) count+=1;
        }
        return count;
    }
    
   static  bool func(pair<int,int>p1,pair<int,int>p2){
        if(p1.first==p2.first) return p1.second<p2.second;
        return p1.first>p2.first;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>v1;
        for(int i=0;i<mat.size();i++){
            v1.push_back({cal_civilian(mat[i]),i});
        }
        sort(v1.begin(),v1.end(),func);
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v1[i].second);
        }
        return ans;

        
    }
};