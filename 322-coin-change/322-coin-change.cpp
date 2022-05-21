#include<bits/stdc++.h>

class Solution {
public:
    
    
    int func(vector<int>& coins, int amount,vector<int>& dp){
        int ans=10001;
        if(amount==0) return 0;
        if(dp[amount]!=-1) return dp[amount];
        for(auto i: coins){
            if(amount-i>=0){
                int val=func(coins,amount-i,dp)+1;
                if(ans>val)ans=val;
            }
        }
        return dp[amount]=ans;
        return ans;
        
    }
    
   int coinChange(vector<int>& coins, int amount) {
    vector<int>dp(10001,-1);
    int res=func(coins,amount,dp);
    if(res==10001) return -1;
       return res;
    }
};