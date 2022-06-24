class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        int ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto &it:m){
            if(it.second==1){
                ans= it.first;
            }
        }
        return ans;
    }
};