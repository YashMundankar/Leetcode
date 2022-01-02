class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(auto i: indices){
            for(int j=0;j<n;j++){
                ans[i[0]][j]++;
            }
            for(int j=0;j<m;j++){
                ans[j][i[1]]++;
            }
        }
        int count=0;
        for(auto i: ans){
            for (auto j : i){
                if(j&1){
                    count++;
                }
            }
        }
        return count;
    }
};