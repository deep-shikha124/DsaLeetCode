class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int mid;
        if(nums.size()%2==0){
            mid=nums.size()/2-1;
        }
        else mid=nums.size()/2;
        for(int i=0;i<nums.size();i++){
            sum=sum+abs(nums[mid]-nums[i]);
        }
        return sum;
    }
};