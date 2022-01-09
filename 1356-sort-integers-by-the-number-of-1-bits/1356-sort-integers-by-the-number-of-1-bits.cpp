class Solution {
public:
    static int count_bits(int num){
        int count=0;
        while(num){
            if(num&1){
                count++;
            }
            num>>=1;
        }
        return count;
    }
    
    static bool func(int p1,int p2){
        if(count_bits(p1)==count_bits(p2)){
            return p1<p2;
        }
        return count_bits(p1)<count_bits(p2);
    }
   
    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin(),arr.end(),func);
        return arr;
    }
};