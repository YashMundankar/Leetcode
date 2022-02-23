class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int i=0;i<prices.size();i++){
            int flag=1;
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]>=prices[j] && flag) {prices[i]-=prices[j];flag=0;}
            }
        }
        return prices;
        
    }
};