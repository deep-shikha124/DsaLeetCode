class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int,int>m;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        // }
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};