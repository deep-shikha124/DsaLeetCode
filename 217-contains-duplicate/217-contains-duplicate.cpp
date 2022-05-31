class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // map<int,int>hash;
        // for(int i=0;i<nums.size();i++){
        //     if(hash.count(nums[i]!=0)){
        //         return true;
        //     }
        //     else{
        //         hash(nums[i])=1;
        //     }
        // }
        // return false;
        set <int> s;
        for(int x:nums){
            s.insert(x);
        }
        if(s.size()<nums.size()){
            return true;
        }
        else return false;
        
    }
};