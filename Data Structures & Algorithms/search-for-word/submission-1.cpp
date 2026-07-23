class Solution {
public:

    bool dfs(int row, int col, int index, vector<vector<bool>>& visited, string 
    
    & word, vector<vector<char>>& board){

        if(index== word.size()){
            return true;
        }

        if(row<0 || row> board.size() || col<0 || col> board.size()){
            return false;
        }

        if(visited[row][col]) return false;
        if(board[row][col]!= word[index]) return false;

       if(dfs(row-1, col, index+1, visited, word, board)) return true;

       if(dfs(row+1, col, index+1,visited, word, board)) return true;

       if(dfs(row, col-1,index+1, visited, word, board)) return true;

       if(dfs(row, col+1, index+1,visited, word, board)) return true;

       return false;

    }

    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>>& visited
       return  dfs(0, 0, 0, visited, word, board);
        
    }
};
