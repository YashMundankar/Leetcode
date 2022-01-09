class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>m1;
        for(auto i: arr){
            m1[i]++;
        }
        for(auto i: arr){
            if(m1[i]==1 && k==1){
                return i;
            }
            if(m1[i]==1){
                k--;
            }
        }
        return "";
    }
};