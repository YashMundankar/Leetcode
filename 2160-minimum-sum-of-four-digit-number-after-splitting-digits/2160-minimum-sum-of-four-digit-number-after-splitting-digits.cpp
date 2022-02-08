class Solution {
public:
    int minimumSum(int num) {
        vector<int>v1;
        while(num){
            int val=num%10;
            num/=10;
            v1.push_back(val);
        }
        sort(v1.begin(),v1.end());
        int num1=v1[0]*10+v1[2];
        int num2=v1[1]*10+v1[3];
        return num1+num2;
    }
};