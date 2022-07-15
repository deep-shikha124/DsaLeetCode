// class Solution {
// public:
//     int maxAreaOfIsland(vector<vector<int>>& grid) {
//     int sum=0;
//     int n=grid.size();
//     int m=grid[0].size();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(grid[i][j]) {
//                 sum=max(sum,traverse(i,j,grid));
//             }
//         }
//     }
//     return sum;
//     }
//     private:
//     int n,m;
//     int traverse(int i,int j,vector<vector<int>>&grid){
//         if(i<0||j<0||i>=n||j>=m||!grid[i][j]) return 0;
//         grid[i][j]=0;
//         return 1+traverse(i-1,j,grid) + traverse(i+1,j,grid) +          traverse(i,j+1,grid)+traverse(i,j-1,grid);
//     }
// };
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < m; j++)
                if (grid[i][j]) ans = max(ans, trav(i, j, grid));
        return ans;
    }
private:
    int n, m;
    int trav(int i, int j, vector<vector<int>>& grid) {
        if (i < 0 || j < 0 || i >= n || j >= m || !grid[i][j]) return 0;
        grid[i][j] = 0;
        return 1 + trav(i-1, j, grid) + trav(i, j-1, grid) + trav(i+1, j, grid) + trav(i, j+1, grid);
    }
};