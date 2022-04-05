class Solution {
public:
     int maxArea(vector<int>& height) {
        int left=0;
        int right= height.size()-1;
        int ans=0;
        int h;
        int w,area=0;
         while(left<right){
             h=min(height[left],height[right]);
             w=right-left;
             area=h*w;
             if(ans<area) ans=area;
             if(height[left]<=height[right]) left++;
             else right--;
         }
         return ans;
    }
};