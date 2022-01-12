class Solution {
public:
    
    static bool func(vector<int>v1,vector<int>v2){
        return v1[1]>v2[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),func);
        int op=0;
        for(auto i :boxTypes ){
            if(truckSize==0){
                break;
            }
            if(truckSize>=i[0]){
                op+=i[0]*i[1];
                truckSize-=i[0];
                
            }
            else{
                op+=truckSize*i[1];
                truckSize=0;
                
            }
        }
        return op;
        
    }
};