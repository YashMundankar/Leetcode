class Solution {
public:
    int cal_val(string s){
        int j=s.length()-1;
        int sum=0,n=1;
        while(j>=0){
            sum+=n*(s[j]-'a');
            n*=10;
            j--;
        }
        return sum;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        return cal_val(firstWord)+cal_val(secondWord)==cal_val(targetWord);
    }
};