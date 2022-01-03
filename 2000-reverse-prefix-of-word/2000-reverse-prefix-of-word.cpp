class Solution {
public:
    void reverse(int i,int j,string &s){
        while(i<j){
            char ch=s[i];
            s[i]=s[j];
            s[j]=ch;
            i++;
            j--;
        }
    }
    string reversePrefix(string word, char ch) {
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                reverse(0,i,word);
                break;
            }
        }
        return word;
    }
};