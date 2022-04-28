class Solution {
public:
    
   
    
    string multiply(string num1, string num2) {
        vector<int>v1(num1.size()+num2.size(),0);
        if(num1=="0" || num2=="0") return "0";
        for(int i=num1.size()-1;i>=0;i--){
            for(int j=num2.size()-1;j>=0;j--){
                v1[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                v1[i+j]+=v1[i+j+1]/10;
                v1[i+j+1]%=10;
        }
    }
        int i=0;
        while(v1[i]==0) i++;
         string ans="";
        while(i<v1.size()){
            ans+=to_string(v1[i]);
        i++;};
        return ans;
        
        
         
    }
};