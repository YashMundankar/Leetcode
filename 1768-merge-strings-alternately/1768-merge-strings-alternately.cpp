class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string op;
        int i=0,j=0;
        while(i<word1.length() && j<word2.length()){
            op.push_back(word1[i]);
            op.push_back(word2[j]);
            i++;
            j++;
        }
        
        while(i<word1.length()){
            op.push_back(word1[i]);
            i++;
        }
        
         while(j<word2.length()){
            op.push_back(word2[j]);
            j++;
        }
        return op;
        
    }
};