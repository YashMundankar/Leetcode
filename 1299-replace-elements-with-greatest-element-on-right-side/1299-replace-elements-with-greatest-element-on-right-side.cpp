class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans(arr.size(),0);
        if(arr.size()==1){
            ans[0]=-1;
            return ans;
        }
        int i=arr.size()-2;
        int max=arr[arr.size()-1];
        int curr_max=arr[arr.size()-1];
        while(i>=0){
            ans[i]=curr_max;
            if(arr[i]>curr_max){
                curr_max=arr[i];
            }
            i--;
        }
        
        ans[arr.size()-1]=-1;
        return ans;
        
    }
};