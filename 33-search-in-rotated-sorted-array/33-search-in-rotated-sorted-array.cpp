class Solution {
public:
    int search(vector<int>& arr, int target) {
      int start=0,end=arr.size()-1;
       int n=arr.size(),indx=0;
	    while(start<=end){
	        int mid=start+(end-start)/2;
	        int prev=(mid+n-1)%n;
	        int next=(mid+1)%n;
	        if(arr[mid]<=arr[prev]&& arr[mid]<=arr[next]){
	            indx=mid;
                break;
	        }
	        else if(arr[mid]<=arr[end]){
	            end=mid-1;
	        }
	        else if(arr[mid]>=arr[start]){
	            start=mid+1;
	        }
	    }
        start=0;
        end=indx;
        int ans=-1;
         while(start<=end){
	        int mid=start+(end-start)/2;
	        if(arr[mid]==target){
	            ans=mid;
                break;
	        }
	        else if(arr[mid]<target){
	            start=mid+1;
	        }
	        else if(arr[mid]>target){
	            end=mid-1;
	        }
	    }
        if(ans==-1){
            start=indx;
        end=n-1;
         while(start<=end){
	        int mid=start+(end-start)/2;
	        if(arr[mid]==target){
	            ans=mid;
                break;
	        }
	        else if(arr[mid]<target){
	            start=mid+1;
	        }
	        else if(arr[mid]>target){
	            end=mid-1;
	        }
	    }
            
        }
        return ans;
	    
    }
};