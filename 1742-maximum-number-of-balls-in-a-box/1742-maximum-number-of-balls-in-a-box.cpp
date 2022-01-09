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
        map<int,int>m1;
        for(int i=lowLimit;i<=highLimit;i++){
            m1[func(i)]++;
        }
        int mx=INT_MIN;
        for(auto i: m1){
            mx=max(i.second,mx);
        }
        return mx;
        
    }
};