class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,bool>m1;
        for(auto i:paths){
            m1[i[1]]=true;
        }
        for(auto i:paths){
            m1[i[0]]=false;
        }
        for(auto it: m1){
            if(it.second){
                return it.first;
            }
        }
        return "";
    }
};