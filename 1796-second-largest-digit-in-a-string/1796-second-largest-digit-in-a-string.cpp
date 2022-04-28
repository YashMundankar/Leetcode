class Solution {
public:
    int secondHighest(string s) {
        int first=INT_MIN,second=INT_MIN;
        for(auto i: s){
            int val=i-'0';
            if(val>=0 && val<=9){
                if(val>first){
                    second=first;
                    first=val;
                }
                else if(val>second && val!=first){
                    second=val;
                }
            }
        }
        cout<<first<<" "<<second<<endl;
        if(second==INT_MIN) return -1;
        return second;
        
    }
};