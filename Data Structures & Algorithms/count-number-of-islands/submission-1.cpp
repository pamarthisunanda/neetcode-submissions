class Solution {
public:

    void dfs(int row, int col,vector<vector<char>>& grid, vector<vector<bool>> &visited ){
        if(row<0 || row>=grid.size() || col<0 || col>=grid[0].size()){
            return;
        }

        if(grid[row][col]=='0'){
            return ;
        }

        if(visited[row][col]){
            return;
        }

        visited[row][col]=true;

        dfs(row, col - 1, grid, visited);
        dfs(row, col + 1, grid, visited);
        dfs(row - 1, col, grid, visited);
        dfs(row + 1, col, grid, visited);

        
    }

    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));

       for(int row=0; row<grid.size(); row++){
        for(int col=0; col<grid[0].size(); col++){
            if(grid[row][col]=='1' && !visited[row][col]){
                count++;
                dfs(row, col, grid, visited);
            }
        }
       }

       return count;
    }
};
