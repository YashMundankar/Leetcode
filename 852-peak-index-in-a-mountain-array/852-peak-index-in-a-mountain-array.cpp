class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,h=arr.size();
        while(l<h){
            int mid=(l+h)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                return mid;
            }
            if(arr[mid]<arr[mid-1]){
                h=mid;
            }
            else{
                l=mid;
            }
        }
        return -1;
    }
};