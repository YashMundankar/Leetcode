class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>b;
        int max_c=INT_MIN;
        for(auto i : candies){
            max_c=max(max_c,i);
            }
         for(auto i : candies){
            if(i+extraCandies>=max_c){
                b.push_back(true);
            }
             else{
                 b.push_back(false);
             }
            }
        
        return b;
        
        
    }
};