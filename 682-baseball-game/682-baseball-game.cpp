class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>v1;
        for(auto i: ops){
            if(i=="+"){
                v1.push_back(v1[v1.size()-1]+v1[v1.size()-2]);
            }
            else if(i=="C"){
                v1.pop_back();
            }
            else if(i=="D"){
                v1.push_back(v1[v1.size()-1]*2);
            }
            else v1.push_back(stoi(i));
        }
        int sum=0;
        for(auto i: v1) sum+=i;
        return sum;
        
    }
};