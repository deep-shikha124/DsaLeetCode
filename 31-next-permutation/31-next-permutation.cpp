class Solution {
public:
//     void s(vector<int>&n){
//         sort(n.begin(),n.end());
//     }
   void nextPermutation(vector<int>& nums) {
//         s(nums);
//         int n=nums.size();
//          if(nums[0]>nums[n-1]){
//                 swap(nums[0],nums[n-1]);
//         }
//         else{
//             for(int i=0;i<n;i++){
//                 if(nums[n-1]!=nums[n-2]){
//                     swap(nums[n-1],nums[n-2]);
//                     break;
//                 }
//             }
            
//         }
       next_permutation(nums.begin(),nums.end());
        
    }
};