class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        vector<vector<bool>>check(mat.size(),vector<bool>(mat[0].size(),true));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==j){
                    sum+=mat[i][j];
                    check[i][j]=false;
                }
                if(i+j+1==mat[0].size() && check[i][j]){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};