class Solution {
public:
    int findMin(vector<int>& nums) {
      int start=0,end=nums.size()-1;
       int n=nums.size(),indx=0;
	    while(start<=end){
	        int mid=start+(end-start)/2;
	        int prev=(mid+n-1)%n;
	        int next=(mid+1)%n;
	        if(nums[mid]<=nums[prev]&& nums[mid]<=nums[next]){
	            indx=mid;
                break;
	        }
	        else if(nums[mid]<=nums[end]){
	            end=mid-1;
	        }
	        else if(nums[mid]>=nums[start]){
	            start=mid+1;
	        }
	    
       
	    }
        return nums[indx];
        
    }
};