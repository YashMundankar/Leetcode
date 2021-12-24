class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val=0;
        for(auto i: operations){
            if(i=="--X"){
                --val;
            }
            else if(i=="X--"){
                val--;
            }
            else if(i=="++X"){
                ++val;
            }
            else{
                val++;
            }
        }
        return val;
        
    }
};