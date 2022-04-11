class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>soln(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                //int one_d_index=((i*n)+j+k)%(m*n);
                int new_j=(j+k)%n ;
                int new_i=(i+((j+k)/n))%m;
                soln[new_i][new_j]=grid[i][j];
                
            }
        }
        return soln;
        
    }
};