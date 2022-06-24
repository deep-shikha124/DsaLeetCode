class Solution {
public:
    vector<vector<int>>ans;
    
    void permut(vector<int>&v,int i,int n){
        if(i==n){
            ans.push_back(v);
            return;
        }
        for(int j=i;j<=n;j++){
            swap(v[i],v[j]);
            permut(v,i+1,n);
            swap(v[i],v[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>v=nums;
        permut(v,0,nums.size()-1);
        return ans;
    }
};