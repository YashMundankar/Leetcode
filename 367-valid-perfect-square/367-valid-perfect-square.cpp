class Solution {
public:
    bool isPerfectSquare(int num) {
        int base=pow(num,1.0/2.0);
        return base*base==num;
        
    }
};