class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans(score.size(),"");
        priority_queue<pair<int,int>>q1;
        for(int i=0;i<score.size();i++){
            q1.push({score[i],i});
        }
        int i=0;
        while(!q1.empty()){
            i++;
            if(i==1){
                auto it=q1.top();
                ans[it.second]+="Gold Medal";
                q1.pop();
            }
             else if(i==2){
                auto it=q1.top();
                ans[it.second]+="Silver Medal";
                 q1.pop();
            }
             else if(i==3){
                auto it=q1.top();
                ans[it.second]+="Bronze Medal";
                 q1.pop();
            } 
            else{
                auto it=q1.top();
                ans[it.second]+=to_string(i);
                q1.pop();
            }
        }
        return ans;
        
    }
};