class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>j;
        for(auto i:jewels){
            j.insert(i);
        }
        int count=0;
        for(auto i : stones){
            if(j.find(i)!=j.end()){
                count++;
            }
        }
        return count;
    }
};