class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) 
    {
        unordered_map<string,int>m1;
        for(auto i=0;i<list1.size();i++){
            m1[list1[i]]=i;
        }
        map<int,vector<string>>m2;
        for(auto i=0;i<list2.size();i++){
            if(m1.find(list2[i])!=m1.end()){
                m2[m1[list2[i]]+i].push_back(list2[i]);
            }
        }
       auto it=m2.begin();
        vector<string>ans(it->second.begin(),it->second.end());
        return ans;
    }
    };