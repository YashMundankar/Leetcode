class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,n=mat.size();
        for(int i=0;i<mat.size();i++){
            if(i!=n-i-1) sum+=mat[i][i]+mat[i][n-i-1];
            else sum+=mat[i][i];
        }
        return sum;
    }
};