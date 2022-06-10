class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>v;
        int i=0,j=1;
        for( i,j;i<nums.size()-1,j<nums.size();i++,j++){
            for(int k=0;k<nums[i];k++){
                v.push_back(nums[j]);
            }
            i++;
            j++;
        }
        return v;
        
    }
};