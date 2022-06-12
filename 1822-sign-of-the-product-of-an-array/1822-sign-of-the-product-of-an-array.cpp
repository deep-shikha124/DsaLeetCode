class Solution {
public:
    int arraySign(vector<int>& nums) {
//       int signFunc;
//       long long pdt=1;
//         for(int i=0;i<nums.size();i++){
//           pdt=pdt*nums[i];
//         }
//       if(pdt<0) signFunc=-1;
//       else if (pdt>0) signFunc=1;
//       else signFunc=0;
      
//       return signFunc;------------->runtime error
      int sgnfunc;
      int count=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
          return 0;
        }
        else {
          if(nums[i]<0){
            count++;
          }
        }
      }
        if(count%2!=0) return -1;
        else return 1;
        
          
    }
};