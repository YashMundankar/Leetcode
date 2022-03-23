class Solution {
public:
    int brokenCalc(int startValue, int target) {
        long long ans=0;
        while(target!=startValue){
            if(target%2==0 && target>startValue){
                target=target/2;
                ans++;
            }
            else if(target>startValue){
                ans++;
                target++;
            }
            else{
                ans+=abs(startValue-target);
                //target=startValue;
                break;
            }
            
        }
        return ans;
    }
};