class Solution {
public:
    
    int func(string word,vector<int>check){
        vector<int>v(27,0);
         for(auto i : word){
            v[i-'a']++;
        }
        for(auto i: word){
            if(v[i-'a']>check[i-'a']) return 0;
        }
        return word.length();
        
    }
    
    int countCharacters(vector<string>& words, string chars) {
        vector<int>check(27,0);
        for(auto i : chars){
            check[i-'a']++;
        }
        int count=0;
        for(auto i : words){
           count+=func(i,check);
        }
        return count;
        
    }
};