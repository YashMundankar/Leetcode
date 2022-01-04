class Solution {
public:
    string sortString(string s) {
        vector<int>v(27,0);
        for(auto i: s){
            v[i-'a']++;
        }
        int flag=1;
        string op;
        while(true){
            flag=1;
            for(int i=0;i<27;i++){
                if(v[i]>0){
                    v[i]--;
                    op+='a'+i;
                    flag=0;
                }
            }
            for(int i=26;i>=0;i--){
                if(v[i]>0){
                    v[i]--;
                    op+='a'+i;
                    flag=0;
                }
            }
            if(flag){
                break;
            }
            
        }
        return op;
        
    }
};