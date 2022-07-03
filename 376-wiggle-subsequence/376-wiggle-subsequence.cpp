class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int highest=1,lowest=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]) highest=lowest+1;
            else if(nums[i+1]<nums[i]) lowest=highest+1;
        }
        return max(highest,lowest);
    }
};