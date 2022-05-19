class Solution {
public:
    vector<vector<int>>directions={{-1,0},{0,-1},{1,0},{0,1}};
    
    
    
    
    int dfs(int m, int n, int i, int j, vector<vector<int>>& matrix,vector<vector<int>>& dp){
        if(dp[i][j]) return dp[i][j];
        int mxDirection=0;
        for(auto it: directions){
            int p=i+it[0];
            int q=j+it[1];
            if(p>=0 && q>=0 && p<m&& q<n && matrix[p][q]>matrix[i][j]) mxDirection=max(dfs(m,n,p,q,matrix,dp),mxDirection);
        }
        dp[i][j]=mxDirection+1;
        return mxDirection+1;
        
        
    }
    
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int mx=0;
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mx=max(mx,dfs(m,n,i,j,matrix,dp));
            }
        }
        return  mx;
    }
};