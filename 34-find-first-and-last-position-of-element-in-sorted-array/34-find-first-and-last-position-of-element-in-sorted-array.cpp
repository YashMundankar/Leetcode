class Solution {
public:
    
    
    int first(int start,int end,vector<int>nums,int t){
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==t){
                ans=mid;
                end=mid-1;
            }
            else if(nums[mid]<t){
                start=mid+1;
                
            }
            else if(nums[mid]>t){
                end=mid-1;
            }
        }
        return ans;
    }
    
    
    
     int last(int start,int end,vector<int>nums,int t){
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==t){
                ans=mid;
                start=mid+1;
            }
            else if(nums[mid]<t){
                start=mid+1;
                
            }
            else if(nums[mid]>t){
                end=mid-1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n1=-1;
        int n2=-1;
        n1=first(0,nums.size()-1,nums,target);
        n2=last(0,nums.size()-1,nums,target);
        vector<int>ans;
        ans.push_back(n1);
        ans.push_back(n2);
        return ans;
        
    }
};