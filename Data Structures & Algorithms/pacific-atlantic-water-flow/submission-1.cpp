class Solution {
public:

    void dfs(int row, int col, vector<vector<int>> &heights, vector<vector<bool>> &visited){
        if(row<0 || row>=heights.size() || col<0 || col>=heights[0].size()) return ;

        if(visited[row][col]) return;

        visited[row][col]=true;
        int dr[]={-1, 1, 0, 0};
        int dc[]={0, 0, -1, 1};

        for(int k=0; k<4; k++){
            int nr=row+dr[k];
            int nc=col +dc[k];

            if(nr<0 || nc<0 || nr>=heights.size()|| nc>=heights[0].size()) continue;

            if(heights[nr][nc]>=heights[row][col]){
                dfs(nr, nc, heights, visited);
            }
        }
        
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<bool>> pacific(heights.size(), vector<bool>(heights[0].size(), false));
        vector<vector<bool>> atlantic(heights.size(), vector<bool>(heights[0].size(), false));

        for(int j = 0; j < heights[0].size(); j++) {
    dfs(0, j, heights, pacific);        // top
}

for(int i = 0; i < heights.size(); i++) {
    dfs(i, 0, heights, pacific);        // left
}

for(int j = 0; j < heights[0].size(); j++) {
    dfs(heights.size() - 1, j, heights, atlantic);  // bottom
}

for(int i = 0; i < heights.size(); i++) {
    dfs(i, heights[0].size() - 1, heights, atlantic); // right
}

vector<vector<int>> ans;
for(int i = 0; i < heights.size(); i++) {
    for(int j = 0; j < heights[0].size(); j++) {

        if(pacific[i][j] && atlantic[i][j]) {
            ans.push_back({i, j});
        }

    }
}

return ans;
    }
};
