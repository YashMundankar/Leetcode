class Solution {
public:
    
    int cal_gcd(int a,int b){
        if(a==0){
            return b;
        }
        return cal_gcd(b%a,a);
    }
    
    int findGCD(vector<int>& nums) {
        int mn=INT_MAX,mx=INT_MIN;
        for(auto i : nums){
            mx=max(mx,i);
            mn=min(mn,i);
        }
        
        return cal_gcd(mn,mx);
        
    }
};