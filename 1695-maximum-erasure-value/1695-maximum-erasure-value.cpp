class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
      //   int maxi=0;
      // int i=0,j=0;
      // int curr=0;
      // int n=nums.size();
      // int m[10002]{};
      // for(;i<n && j<n;){
      //   if(m[nums[j]]==0){
      //     curr+=nums[j];
      //     maxi= max(maxi,curr);
      //     m[nums[j]]++;
      //     j++;
      //   }
      //   else{
      //     while(i<j && nums[i]!=nums[j]){
      //       m[nums[i]]--;
      //       curr-=nums[i];
      //       i++;
      //     }
      //     m[nums[i]]--;
      //     curr-=nums[i];
      //     i++;
      //   }
      // }
      // return maxi;
      unordered_map<int,int>m;
      int i=0,j=0;
      int sum=0;
      int maxi=0;
      while(j<nums.size() && i<nums.size()){
        if(m[nums[j]]==0){
          sum+=nums[j];
          maxi=max(maxi,sum);
          m[nums[j]]++;
          j++;
        }
        else{
          while(i<j && nums[i]!=nums[j]){
            m[nums[i]]--;
            sum-=nums[i]; 
            i++;
          }
          m[nums[i]]--;
          sum-=nums[i];
          i++;
        }
      }
      return maxi;
    }
};