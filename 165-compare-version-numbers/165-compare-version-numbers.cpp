class Solution {
public:

    
    int compareVersion(string version1, string version2) {
        vector<int>s1;
        vector<int>s2;
        stringstream ss(version1);
        stringstream ss2(version2);
        string token;
        while(getline(ss,token,'.'))
        {
            s1.push_back(stoi(token));
        }
        while(getline(ss2,token,'.'))
        {
            s2.push_back(stoi(token));
        }
        if(s1.size()<s2.size()){
            int k=s2.size()-s1.size();
            while(k--) s1.push_back(0);
        }
        else if(s1.size()>s2.size()){
            int k=s1.size()-s2.size();
            while(k--) s2.push_back(0);
        }
        
        int i=0;
        while(i<s1.size()){
            if(s1[i]<s2[i]) return -1;
            else if(s1[i]>s2[i]) return 1;
            i++;
        }
        return 0;
        
        //for(auto i: s1) cout<<i<<"  ";
        //cout<<endl;
        //for(auto i: s2) cout<<i<<"  ";
        
        return 0;
    }
};