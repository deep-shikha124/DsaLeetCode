class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum1=0,sum2=0,sum;
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j){
                    sum1=sum1+mat[i][j];
                }
                if(i+j==n-1 && i!=j ){
                sum2=sum2+mat[i][j];
                }
                
            }
        }
        return sum1+sum2;
    }
};