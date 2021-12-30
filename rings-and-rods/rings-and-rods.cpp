class Solution {
public:
    int countPoints(string rings) {
        vector<unordered_set<char>>v1(10);
        for(int i=1;i<rings.length();i+=2){
            v1[rings[i]-'0'].insert(rings[i-1]);
            
        }
        int count=0;
        for(auto i: v1){
            if(i.size()==3){
                count++;
            }
            
        }
        return count;
        
    }
};