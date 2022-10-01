class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>v;
//         for(int i=0;i<n;i++){
//             v.push_back(nums[i]);
            
//         }
//          for(int i=n;i<2*n;i++){
//             v.push_back(nums[i-n]);
            
//         }
//         return v;
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n*2;i++){
            v.push_back(nums[i%n]);
        }
        return v;
    }
};