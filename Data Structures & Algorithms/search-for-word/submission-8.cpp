class Solution {
public:


    bool dfs(int row, int col, int index,vector<vector<bool>>& visited, string & word, vector<vector<char>>& board){
       

        if(index== word.size()){
            return true;
        }

        if(row<0 || row>= board.size() || col<0 || col>= board[0].size()){
            return false;
        }

        
                if(visited[row][col]) return false;
        if(board[row][col]!= word[index]) return false;

        visited[row][col]=true;
       if (dfs(row - 1, col, index + 1, visited, word, board) ||
            dfs(row + 1, col, index + 1, visited, word, board) ||
            dfs(row, col - 1, index + 1, visited, word, board) ||
            dfs(row, col + 1, index + 1, visited, word, board)) {
            return true;
        }

        visited[row][col] = false;

       return false;

    }

    bool exist(vector<vector<char>>& board, string word) {
         int rows = board.size();
        int cols = board[0].size();
        vector<vector<bool>>& visited(rows, vector<bool>(cols, false));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (dfs(i, j, 0, visited, word, board))
                    return true;
            }
        }

        return false;
    }
};
