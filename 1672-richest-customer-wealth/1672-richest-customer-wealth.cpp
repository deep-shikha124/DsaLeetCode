class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // int sum;
        // int max=0;
        // for(int i=0;i<accounts.size();i++){
        //     sum=0;
        //     for(int j=0;j<accounts[i].size();j++){
        //         sum=sum+accounts[i][j];
        //     }
        //     if(max<sum){
        //         max=sum;
        //     //sum=0;    
        //     }
        // }
        // return max;
        
        int sum,maxi=0;
        for(int i=0;i<accounts.size();i++){
            sum=0;
            for(int j=0;j<accounts[0].size();j++){
                sum=sum+accounts[i][j];
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};