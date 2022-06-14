class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=nums.size();
       int i=0,j=1;
       while( i<k && j<k){
           if(nums[i]==0 && nums[j]!=0){
               swap(nums[i],nums[j]);
               j++;
               i++;
               
           }
           else if(nums[i]!=0 && nums[j]==0){
               i=j;
               j++;
           }
           else {
               j++;
           }
       }
          
    }
};