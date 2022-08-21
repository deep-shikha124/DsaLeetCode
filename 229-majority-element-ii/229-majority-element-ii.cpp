class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>v;
        for(auto [a,b]:mp){
            if(b>nums.size()/3){
                v.push_back(a);
            }
        }
        return v;
    }
};