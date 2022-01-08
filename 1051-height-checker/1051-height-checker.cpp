class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>s(heights.begin(),heights.end());
        sort(s.begin(),s.end());
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=heights[i]){
                count++;
            }
        }
        return count;
        
    }
};