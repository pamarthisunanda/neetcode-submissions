class Solution {
public:

    int dfs(int row, int col, vector<vector<int>> &grid, vector<vector<bool>> &visited){
        if(row<0 || row>=grid.size() || col<0 ||    col>=grid.size()){
            return 1;
        }

        if(grid[row][col]==0){
            return 1;
        }

        if(visited[row][col]){
            return 0;
        }

        visited[row][col]=true;
        return dfs(row, col-1)+dfs(row, col+1)+dfs(row-1, col)+dfs(row+1, col);
    }


    int islandPerimeter(vector<vector<int>>& grid) {
        vector<vector<bool>> visited;
        int row=0;
        int col=0;
        for(int row=0; row<grid.size(); row++){
            for(int col =0; col<grid.size(); col++){

                if(grid[row][col]==1){
                    return dfs(row, col, grid, visited);
                }
            }
        }
    }
};