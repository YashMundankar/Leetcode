class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream ss(text);
        string word;
        vector<string>ans;
        vector<string>temp;
        
        while(ss>>word){
            temp.push_back(word);
        }
        int i=0,j=1;
        while(i<temp.size()-2){
            if(temp[i]==first && temp[j]==second){
                ans.push_back(temp[j+1]);
            }
            i++;
            j++;
        }
        return ans;
    }
};