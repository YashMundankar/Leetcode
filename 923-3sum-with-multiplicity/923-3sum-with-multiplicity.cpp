class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<long,long>m1;
        int mod= 1e9 + 7;
        long res=0;
        for(auto i : arr) m1[i]++;
        for(auto it1 : m1){
            for(auto it2 : m1){
                int i=it1.first, j=it2.first, k=target-i-j;
                if(!m1.count(k)) continue;
                if(i==j&&j==k){
                  res+=(m1[i]* (m1[j]-1) *(m1[k]-2))/6; 
                    
                }
                else if(i==j && j!=k){
                    res+=(m1[i]*(m1[j]-1)/2)*m1[k];
        
                }
                else if(i<j && j<k){
                    res+=m1[i]*m1[j]*m1[k];
                }
            }        
        }
        return res%mod;
        
    }
};