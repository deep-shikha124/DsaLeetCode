class Solution {
public:
void combi(vector<vector<int>>&ans,vector<int>&temp,int n,int start,int k){
    if(k==0){
        ans.push_back(temp);
        return;
    }
    for(int i=start;i<=n;++i){
        temp.push_back(i);
        
        combi(ans,temp,n,i+1,k-1);
        temp.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        combi(ans,temp,n,1,k);
        return ans;
    }
};