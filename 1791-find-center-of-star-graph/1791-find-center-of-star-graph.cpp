class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<vector<int>>AL(edges.size()+2);
        AL[0].push_back(0);
        for(auto i : edges){
            AL[i[0]].push_back(i[1]);
            AL[i[1]].push_back(i[0]);
        }
        int cent=0;
        int temp=0;
        for(int i=0;i<AL.size();i++){
            // cout<<AL[i].size()<<" ";
            if(temp<AL[i].size()){
                temp=AL[i].size();
                cent=i;
            }
        }
        return cent;
        
        // return 0;
    }
};