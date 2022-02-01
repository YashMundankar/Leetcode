class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>mx(prices.size(),0);
        vector<int>mn(prices.size(),0);
        int val=prices[0];
        for(int i=0;i<prices.size();i++){
            val=min(val,prices[i]);
            mn[i]=val;
        }
        val=prices[prices.size()-1];
          for(int i=prices.size()-1;i>=0;i--){
            val=max(val,prices[i]);
            mx[i]=val;
        }
        
        int price=0;
        for(int i=0;i<prices.size();i++){
            price=max(price,mx[i]-mn[i]);
        }
        return price;
        
        
    }
};