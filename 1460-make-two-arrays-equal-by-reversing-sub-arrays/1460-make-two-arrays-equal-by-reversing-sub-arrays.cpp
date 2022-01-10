class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int>a(1001,0);
        vector<int>b(1001,0);
        for(auto i : target) a[i]++;
        for(auto i : arr) b[i]++;
        for(int i=1;i<1001;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
        
    }
};