class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        map<int,int>m1;
        for(auto i : rectangles)
        {
            int mn=min(i[0],i[1]);
            m1[mn]++;
          
        }
        int mx=INT_MIN;
        for(auto it : m1){
            mx=max(mx,it.first);
        }
        return m1[mx];
    }
};