class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int fresh=0;
        int m=grid.size();
        int n=grid[0].size();
       

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==2){
                    q.push({i, j});
                }

                if(grid[i][j]==1){
                    fresh++;
                }
            }
        }

        int mins=0;
        int dr[]={-1, 1, 0, 0};
        int dc[]={0, 0, -1, 1};

        while(!q.empty() && fresh>0){
             int size=q.size();

             while(size--){
                auto[row, col]=q.front();
                q.pop();

                for(int k=0; k<4; k++){
                    int nr=row+dr[k];
                    int nc=col+dc[k];

                    if(nr<0 || nr>=m|| nc<0 || nc>=n) continue;

                    if(grid[nr][nc]==1){
                        grid[nr][nc]=2;
                        fresh--;
                        q.push({nr, nc});
                    }
                }
             }

             mins++;

        }

        if(fresh>0) return -1;

        return mins;
    }
};
