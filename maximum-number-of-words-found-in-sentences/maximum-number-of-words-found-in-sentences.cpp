class Solution {

    
public:
    int max_count=INT_MIN;
    void ct(string s){
        int count=0;
        stringstream ss(s);
        string temp;
            while(getline(ss, temp, ' '))

    {

        count++;
            }
        max_count=max(max_count,count);
    }

    int mostWordsFound(vector<string>& sentences) {
        for(auto i: sentences){
            ct(i);
        
        
    }
        return max_count;
    }
};