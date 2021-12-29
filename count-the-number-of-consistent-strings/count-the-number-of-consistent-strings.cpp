class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>check;
        for(auto i : allowed)
        {
            check.insert(i);
        }
        int flag=1,count=0;
        for(auto i : words)
        {
            flag=1;
            for(auto j: i)
            {
                if(check.find(j)==check.end())
                {
                    flag=0;
                }
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
};