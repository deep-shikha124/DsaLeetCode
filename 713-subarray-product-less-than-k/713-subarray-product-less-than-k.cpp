class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int i=0,j=0,pdt=1,count=0;
        while(j<nums.size() && i<nums.size()){
            pdt=pdt*nums[j];
            while(pdt>=k){
                pdt=pdt/nums[i++];
            }
            if(pdt<k){
                count+=j-i+1;
                j++;
            }
            
        }
        // int size=0;
        // for(auto n:nums){
        //     if(n<k){
        //         size++;
        //     }
        // }
        //int ans=count+size;
        return count;
    }
};