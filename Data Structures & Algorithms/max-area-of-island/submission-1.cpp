class Solution {
public:

    int dfs(int row, int col,vector<vector<int>>& grid, vector<vector<bool>> &visited ){
        if(row<0 || row>=grid.size() || col<0 || col>=grid[0].size()){
            return 0;
        }

        if(grid[row][col]==1){
            return 0;
        }

        if(visited[row][col]){
            return 0;
        }

        visited[row][col]=true;

       return 1+ dfs(row, col - 1, grid, visited)
        +dfs(row, col + 1, grid, visited)
        +dfs(row - 1, col, grid, visited)
        +dfs(row + 1, col, grid, visited);

        
    }

    int numIslands(vector<vector<int>>& grid) {
        
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
int maxAreaOfIsland=0;
       for(int row=0; row<grid.size(); row++){
        for(int col=0; col<grid[0].size(); col++){
            if(grid[row][col]==1 && !visited[row][col]){
                
                int area=dfs(row, col, grid, visited);
                maxAreaOfIsland=max(maxAreaOfIsland, area);
            }
        }
       }

       return maxAreaOfIsland;
    }
};
