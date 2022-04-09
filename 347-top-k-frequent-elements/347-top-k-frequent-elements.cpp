class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m1;
        for(auto i: nums) m1[i]++;
        vector<pair<int,int>>v1(m1.begin(),m1.end());
        priority_queue<pair<int,int>>pq;
        for(auto i: v1){
            pq.push({i.second,i.first});
        }
        vector<int>ans;
        while(k--){
            auto it=pq.top();
            pq.pop();
            ans.push_back(it.second);
        }
        return ans;
        
    }
};