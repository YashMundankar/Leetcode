class Solution {
public:
    
    int func(int n){
        int count=0;
        while(n){
            if(n&1){
                count++;
            }
            n>>=1;
        }
        return count;
    }
    
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            ans.push_back(func(i));
        }
        return ans;
        
    }
};