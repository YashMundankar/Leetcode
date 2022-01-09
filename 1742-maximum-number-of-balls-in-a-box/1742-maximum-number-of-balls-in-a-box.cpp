class Solution {
public:
    int func(int num){
        int sum=0;
        while(num){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {
        vector<int>v(46,0);
        for(int i=lowLimit;i<=highLimit;i++){
            v[func(i)]++;
        }
        int mx=INT_MIN;
        for(auto i: v){
            mx=max(i,mx);
        }
        return mx;
        
    }
};