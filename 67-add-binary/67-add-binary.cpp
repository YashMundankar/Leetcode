class Solution {
public:
    string addBinary(string a, string b) {
    string ans;
    int i=a.length()-1,j=b.length()-1,extra=0;
    while(i>=0||j>=0||extra){
        if(i>=0){
            extra+=a[i]-'0';
            i--;
        }
        if(j>=0){
            extra+=b[j]-'0';
            j--;
        }
        ans+=(extra%2 +'0');
        extra=extra/2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};