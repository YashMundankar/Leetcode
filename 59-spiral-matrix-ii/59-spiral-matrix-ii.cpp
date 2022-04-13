class Solution {
public:
    
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        int left=0, right=n-1, top=0, bottom=n-1;
        int val=1;
        while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans[top][i]=val;
            val++;
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans[i][right]=val;
            val++;
        }
        right--;
        for(int i=right;i>=left;i--){
            ans[bottom][i]=val;
            val++;
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            ans[i][left]=val;
            val++;
        }
        left++;
        }
        return ans;
    }
};