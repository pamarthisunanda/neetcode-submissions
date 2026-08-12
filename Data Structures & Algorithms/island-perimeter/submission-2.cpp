class Solution {
public:

    int dfs(int row, int col, vector<vector<int>> &grid, vector<vector<bool>> &visited){
        if(row<0 || row>=grid.size() || col<0 ||    col>=grid[0].size()){
            return 1;
        }

        if(grid[row][col]==0){
            return 1;
        }

        if(visited[row][col]){
            return 0;
        }

        visited[row][col]=true;
        return dfs(row, col-1, grid, visited)+dfs(row, col+1, grid, visited)+dfs(row-1, col,grid, visited)+dfs(row+1, col,grid, visited);
    }


    int islandPerimeter(vector<vector<int>>& grid) {
vector<vector<bool>> visited(rows,vector<bool>(cols,false));
       
        for(int row=0; row<grid.size(); row++){
            for(int col =0; col<grid[0].size(); col++){

                if(grid[row][col]==1){
                    return dfs(row, col, grid, visited);
                }
            }
        }
        return 0;
    }

};

