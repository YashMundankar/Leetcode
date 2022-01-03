class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        //vector<vector<bool>>check(mat.size(),vector<bool>(mat[0].size(),true));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==j){
                    sum+=mat[i][j];
                    mat[i][j]=0;
                }
                if(i+j+1==mat[0].size() && mat[i][j]){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};