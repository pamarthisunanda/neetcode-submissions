class Solution {
public:

int INF =2147483647;
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        queue<pair<int, int>> q;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                }
            }
        }

        while(!q.empty()){
            auto[row, col]=q.front();
            q.pop();

            int dr[]={-1, 1, 0, 0};
            int dc[]={0, 0, -1, 1};
            for(int k=0; k<4; k++){
                int nr=row+dr[k];
                int nc=col+dc[k];

                if(nr<0 || nr>=m || nc<0 || nc>=n){
                    continue;
                }

                if(grid[nr][nc]== -1) continue;
                if(grid[nr][nc]==INF){
                    grid[nr][nc]=grid[row][col]+1;
                    q.push({nr, nc});
                }
            }
        }

    }
};
