class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>check(26,0);
        for(auto i : sentence){
            int k=i-'a';
            check[k]++;
        }
        for(auto i: check){
            if(i==0){
                return false;
            }
        }
        return true;
    }
};