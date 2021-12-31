class Solution {
public:
    void rev(vector<int>&v1){
        int i=0;int j=v1.size()-1;
        while(i<j){
            int temp=v1[i];
            v1[i]=v1[j];
            v1[j]=temp;
            i++;
            j--;
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image){
        for(int i=0;i<image.size();i++){
            rev(image[i]);
            
        }
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[0].size();j++){
                image[i][j]=image[i][j]^1;
            }
        }
        return image;
        
    }
};