class Solution {
public:
    
    bool areNumbersAscending(string s) 
    {
        stringstream ss(s);
        string token;
        int last_seen=0;
        while(ss>>token){
            if(isdigit(token[0])){
                if(stoi(token)<=last_seen) return false;
                last_seen=stoi(token);
            }
        }
        return true;
    }
};