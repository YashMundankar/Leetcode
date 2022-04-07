class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<float>s1;
        for(auto i: arr){
            if(s1.find(i/(2+0.00))!=s1.end()||s1.find(i*2)!=s1.end()) {return true;}
           s1.insert(i);
        }
        // for(auto i :arr){
        //     if(s1.find(i/(2+0.00))!=s1.end()||s1.find(i*2)!=s1.end()) {cout<<i<<"  "<<i*2;return true;}
        // }
        return false;
    }
};