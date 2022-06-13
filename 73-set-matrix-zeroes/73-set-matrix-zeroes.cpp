class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix[0].size();
        int n=matrix.size();
        vector<int>cols(m,1);
      vector<int>rows(n,1);
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(matrix[i][j]==0){
            
            rows[i]=0;
            cols[j]=0;
          }
            
        }
      }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(cols[j]==0 || rows[i]==0){
                    matrix[i][j]=0;
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(matrix[i][j]==-1){
        //             matrix[i][j]=0;
        //         }
        //     }
        // }
        
    }
        
    
};