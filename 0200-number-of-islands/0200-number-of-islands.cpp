class Solution {
public:
    void dfs(int i,int j, vector<vector<char>>& grid, vector<vector<bool>>& vis){
        int n=grid.size();
        int m=grid[0].size();

        if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || grid[i][j]=='0') return;

        if(grid[i][j]=='1') vis[i][j]=true;

        dfs(i+1, j, grid, vis);
        dfs(i-1, j, grid, vis);
        dfs(i ,j+1, grid, vis);
        dfs(i ,j-1, grid, vis);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        vector<vector<bool>> vis(n, vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j] || grid[i][j]=='0') continue;
                dfs(i,j,grid,vis);
                c++;
            }
        } 
        return c;
    }
};