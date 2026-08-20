class Solution {
public:

void dfs(int row, int col, vector<vector<char>> &board){
    if(row<0 || row>=board.size() || col<0 || col>=board[0].size()){
        return;
    }

    if(board[row][col] != 'O') return;
    board[row][col] = 'T';

                dfs(row-1, col, board);
                dfs(row+1, col, board);
                dfs(row, col-1, board);
                dfs(row, col+1, board);
            
}


    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n= board[0].size();

        for(int col =0; col<n; col++){
            if(board[0][col]=='O'){
                dfs(0, col, board);
            }
            if(board[m - 1][col] == 'O') {
                dfs(m - 1, col, board);
            }
        }

        for(int row =0; row<m; row++){
            if(board[row][0]=='O'){
                dfs(row, 0, board);
            }
            if(board[row][n - 1] == 'O') {
                dfs(row, n-1, board);
            }
        }

        for(int row=0; row<m; row++){
            for(int col=0; col<n; col++){
                if(board[row][col]=='O'){
                    board[row][col]='X';
                }

                else if(board[row][col]=='T'){
                    board[row][col]='O';
                }
            }
        }


    }
};
