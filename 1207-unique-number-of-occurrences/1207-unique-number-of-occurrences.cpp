class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>m1(2001,0);
        for(auto i: arr){
            m1[i+1000]++;
        }
        sort(m1.begin(),m1.end());
        for(int i=1;i<2001;i++){
            if(m1[i] && m1[i-1]==m1[i]){
                return false;
            }
        }
        return true;
        
    }
};