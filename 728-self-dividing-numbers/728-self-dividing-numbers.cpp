class Solution {
public:
    
    bool check(int n){
               int temp=n;
        while(temp){
            int rem=temp%10;
            if(rem==0){
                return false;
            }
            if(n%rem!=0){
                return false;
            }
            temp/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(check(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};