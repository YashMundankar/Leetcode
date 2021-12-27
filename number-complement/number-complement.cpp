class Solution {
public:
    int findComplement(int num) {
        int temp=num;
        int count=0;
        while(temp!=0){
            temp=temp>>1;
            count++;
            }
        int ones=pow(2,count-1);
        ones=ones+(ones-1);
        return num^ones;
    }
};