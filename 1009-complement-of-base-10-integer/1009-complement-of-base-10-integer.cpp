class Solution {
public:
    int bitwiseComplement(int n) {
        int count=0,temp=n;
        if(n==0){
            return 1;
        }
        while(temp){
            temp=temp>>1;
            count++;
        }
        int val=pow(2,count);
        val--;
        return n^val; 
        
    }
};