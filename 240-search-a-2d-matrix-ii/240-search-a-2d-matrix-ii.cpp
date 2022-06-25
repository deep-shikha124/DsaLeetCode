class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(matrix[i][j]==target)
        //             return true;
        //     }
        // }
        // return false;
        int n=matrix.size();
        int start=0,end=matrix[0].size()-1;
        while(start<n && end>=0){
            if(matrix[start][end]==target) return true;
            else if(target<matrix[start][end]) end--;
            else start++;
        }
        return false;
    }
};