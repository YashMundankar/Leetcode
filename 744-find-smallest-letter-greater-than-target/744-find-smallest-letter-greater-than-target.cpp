class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        //if(target=='z') return 'a';
        vector<int>v1(27,0);
        for(auto i: letters){
            v1[i-'a']++;
            
        }
        int v=target-'a';
        char ans=-1;
        for(int i=v+1;i<27;i++){
            if(v1[i]){ ans=(i+97);break;} 
        }
        if(ans==-1){
            for(int i=0;i<v;i++){
                if(v1[i]){ ans=(i+97);break;} 
                }
            }
        return ans;
        
    }
};