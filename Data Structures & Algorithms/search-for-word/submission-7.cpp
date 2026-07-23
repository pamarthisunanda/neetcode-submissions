class Solution {
public:


    bool dfs(int row, int col, int index, string & word, vector<vector<char>>& board){
        vector<vector<bool>>& visited(board.size(), vector<bool>(board[0].size, false))

        if(index== word.size()){
            return true;
        }

        if(row<0 || row>= board.size() || col<0 || col>= board[0].size()){
            return false;
        }

        
                if(visited[row][col]==true) return false;
        if(board[row][col]!= word[index]) return false;

        visited[row][col]=true;
       if(dfs(row-1, col, index+1, visited, word, board)) return true;
       visited[row][col]=false;

       if(dfs(row+1, col, index+1,visited, word, board)) return true;
       visited[row][col]=false;

       if(dfs(row, col-1,index+1, visited, word, board)) return true;
       visited[row][col]=false;

       if(dfs(row, col+1, index+1,visited, word, board)) return true;
       visited[row][col]=false;

       for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[0].size(); j++) {
        if (dfs(i, j, 0, visited, word, board))
            return true;
    }
}

return false;

       
        
       return false;

    }

    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>>& visited;
       return  dfs(0, 0, 0, visited, word, board);
        
    }
};
