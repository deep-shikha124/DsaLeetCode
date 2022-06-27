class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        while(end>start){
            int mid=start+(end-start)/2;
            if(nums[mid+1]>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return start;
    }
};