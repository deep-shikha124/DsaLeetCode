class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,sum=0;
        int update=INT_MAX;
        while(i<nums.size() && j<nums.size()){
            
            sum+=nums[j];
            if(sum<target){
                j++;
            }
            else{
                while(sum>=target){
                    update=min(j-i+1,update);
                    sum-=nums[i];
                    i++;
                }
                j++;
            }
           
        }
      if(update==INT_MAX){
          return 0;
      }
        return update;
    }
};