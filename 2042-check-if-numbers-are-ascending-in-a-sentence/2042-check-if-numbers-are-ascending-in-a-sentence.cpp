class Solution {
public:
    
    bool isNumber(string s)
    {
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
    }
    
    bool areNumbersAscending(string s) 
    {
        vector<int>ans;
        stringstream ss(s);
        string token;
        while(getline(ss,token,' ')){
            
            if(isNumber(token)){
                int val=stoi(token);
                ans.push_back(val);
                //cout<<token<<" ";
            }
        }
        
        for(int i=1;i<ans.size();i++){
            if(ans[i]<=ans[i-1]){
                return false;
            }
        }
        return true;
    }
};