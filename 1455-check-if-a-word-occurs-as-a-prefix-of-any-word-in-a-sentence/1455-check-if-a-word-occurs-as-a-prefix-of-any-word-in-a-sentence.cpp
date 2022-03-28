class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int ans=-1;
        int i=0;
        while(ss>>word){
            i++;
            if(word.length()==searchWord.length()){
                if(word==searchWord){ans=i;
                break;}
            }
            else if(word.length()>searchWord.length()){
                 string r = word.substr(0, searchWord.length());
                if(r==searchWord)
                {ans=i;
                break;}
 
            }
        }
        return ans;
        
    }
};