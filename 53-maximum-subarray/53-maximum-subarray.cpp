class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //brute force O(n3)--->
//         int maxi=0;
//         for(int i=0;i<nums.size()-1;i++){
//             for(int j=i;j<nums.size()-1;j++){
//                  int sum=0;
//                 for(int k=i;k<j;k++){
                   
//                     sum=sum+nums[k];
//                     if(sum>maxi)
//                         maxi=sum;
//                 }
//             }
//         }
//         return maxi;
       
        
        //brute force O(n2)---->
        // int maxi=0,sum;
        // for(int i=0;i<nums.size()-1;i++){
        //     sum=0;
        //     for(int j=i;j<nums.size()-1;j++){
        //         sum=sum+nums[j];
        //         if(sum>maxi)
        //             maxi=sum;
        //     }
        // }
        // return maxi;
        
        //O(n)---->
        int n=nums.size();
        int sum=INT_MIN;
        int temp=0;        
        
        for(int i=0;i<n;i++)
        {
            temp=max(nums[i],nums[i]+temp);
            sum=max(sum,temp);
        }
        return sum;
        
       
        
    }
};