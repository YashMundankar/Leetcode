class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m1;
        vector<int>v1(1001,0);
        for(auto i: arr){
            m1[i]++;
        }
        for(auto it : m1){
            v1[it.second]++;
        }
        for(auto i : v1){
            if(i>1){
                return false;
            }
        }
        return true;
        
    }
};