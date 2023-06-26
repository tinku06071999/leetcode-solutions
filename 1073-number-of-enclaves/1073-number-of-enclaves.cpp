class Solution {
public:
  void dfs(int sr, int sc,vector<vector<int>> &grid, int delrow[], int delcol[],int n, int m){
     grid[sr][sc]=0;
     for(int i=0;i<4;i++){
         int nrow = sr+delrow[i];
         int ncol = sc+delcol[i];
         if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && grid[nrow][ncol]==1 ){
             dfs(nrow,ncol,grid,delrow,delcol,n,m);
         }
     }
  }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,+1,0,-1};
        // vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++){  // for the traversal of first and last  row
            if(grid[0][i]==1){
                dfs(0,i,grid,delrow,delcol,n,m);
            }
            if(grid[n-1][i]==1){
                dfs(n-1,i,grid,delrow,delcol,n,m);
            }
        }
        for(int j=0;j<n;j++){   // for the traversal of first and last column
           if(grid[j][0]==1 ){
               dfs(j,0,grid,delrow,delcol,n,m);
           }
           if(grid[j][m-1] ){
               dfs(j,m-1,grid,delrow,delcol,n,m);
           }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 ) count++;
            }
        }
        return count;
    }
};