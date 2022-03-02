class Solution {
public:
    
    int func(int n){
        int sum=0;
        while(n){
            int val=n%10;
            n=n/10;
            sum+=val*val;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int check=n;
        map<int,int>hash;
        while(true){
            check=func(check);
            if(check==1){
                return true;
            }
            else if(hash[check]) return false;
            else hash[check]++;
        }
        return false;
    }
};