class Solution {
public:
    
    bool check(int n){
        string temp=to_string(n);
        for(int i=0;i<temp.size();i++){
            if(temp[i]=='0'){
                return false;
            }
            if(n%(temp[i]-'0')!=0){
                return false;
            }
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