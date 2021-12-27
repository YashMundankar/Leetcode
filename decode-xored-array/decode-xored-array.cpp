class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        ans.push_back(first);
        int val;
        for(int i=0; i<encoded.size();i++)
        {
            val= encoded[i]^ans[i];
            ans.push_back(val);
        }
        return ans;
        
    }
};