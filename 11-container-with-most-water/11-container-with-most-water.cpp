class Solution {
public:
    int maxArea(vector<int>& height) {
        // int area=0;
        // for(int i=0;i<height.size()-1;i++){
        //    for(int j=1;j<height.size();j++){
        //        area=max(area,min(height[i],height[j])*(j-i));
        //    }
        // }
        // return area;
        int left=0,right=height.size()-1;
        int area=0;
        while(left<=right){
            int width=right-left;
            area=max(area,min(height[left],height[right])*width);
            if(height[left]<height[right]) left++;
            else if(height[left]>height[right]) right--;
            else{
                left++;
                right--;
            }
        }
        return area;
    }
};