class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        if(nums.size()==1)return 0;
        // if(nums.size()==2){
        //     int avg=(nums[0]+nums[1])/2;
        //     if(avg>abs(nums[0]-nums[1])) return 0;
        //     return 1;
        // }
        int lb=0;
        long long ans=LONG_MAX;
        int  res;
        int i=0,j=0;
        long long left_sum=0,right_sum=0;
        // cout<<left_sum<<endl;
          while(j<nums.size()){
                 right_sum+=nums[j];
                 // count++;
                 j++;
                 }
        
        while(lb<nums.size()){
            // cout<<left_sum<<" "<<right_sum<<endl;
            left_sum+=nums[lb];
            right_sum-=nums[lb];
            long long left_avg=left_sum/(lb+1);
            long long right_avg=0;
            if(nums.size()-lb-1) right_avg=right_sum/(nums.size()-lb-1);
            // cout<<left_avg<<" "<<right_avg<<endl;
            if(ans>abs(left_avg-right_avg)) {
                
                ans=min(ans,abs(left_avg-right_avg));
                // cout<<ans<<"<=="<<endl;
                res=lb;
                // cout<<res<<endl;
            }
            
            // cout<<lb<<" Herre LEre"<<endl;
            
            lb++;
            
            
        }
        return res;
       
        
        
    }
};