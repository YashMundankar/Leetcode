class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        vector<vector<int>>dp(n,vector<int>(n,0));
        int count =0;
        for(int i=0;i<n;i++){
            dp[i][i]=1;
            count++;
        }
        
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                count++;
            };
        }
        
        for(int i=3;i<=n;i++) // picking lenghts
        {
            for(int k=0;k<n-i+1;k++) // like reach till n-1 to access i+1
            {
             int j=i+k-1;
                if(s[k]==s[j] && dp[k+1][j-1]==1){
                    dp[k][j]=1;
                    count++;
                }
            }
            
        }
        return count;
        
    }
};