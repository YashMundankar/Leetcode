class Solution {
public:
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<int>v(1001,0);
        for(auto i :boxTypes ){
            v[i[1]]+=i[0];
            }
        int op=0;
        int i=1000;
        while(i>0 )
        {
            if(truckSize>=v[i]){
                op+=v[i]*i;
                truckSize-=v[i];
                
            }
            else{
                op+=truckSize*i;
                break;
                
            }
            i--;
        }
        return op;
        
    }
};