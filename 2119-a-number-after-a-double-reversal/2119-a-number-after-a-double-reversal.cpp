class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0){
            return true;
        }
        if(num%2==0)
        {
            float temp=num/5.00;
            if(temp==floor(temp)){
                return false;
        }
        }
        
        return true;
        
    }
};