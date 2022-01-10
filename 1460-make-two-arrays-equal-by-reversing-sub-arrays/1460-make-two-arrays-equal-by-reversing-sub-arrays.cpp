class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int>a(1001,-1);
        for(auto i : target) a[i]++;
        for(auto i : arr) a[i]--;
        for(int i=1;i<1001;i++){
            if(a[i]!=0 && a[i]!=-1){
                return false;
            }
        }
        return true;
        
    }
};