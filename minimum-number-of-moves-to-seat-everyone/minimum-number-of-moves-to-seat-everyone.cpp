class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int cnt=0;
        vector<int>v1(101,0);
        vector<int>v2(101,0);
        for(auto i: seats){
            v1[i]++;
        }
        for(auto i: students){
            v2[i]++;
        }
        int i=0,j=0;
        while(i<101){
            if(!v1[i]){
                i++;
            }
            else if(!v2[j]){
                j++;
            }
            else {
                cnt+=abs(i-j);
                v1[i]--;
                v2[j]--;
            }
        }
        return cnt;
    }
};