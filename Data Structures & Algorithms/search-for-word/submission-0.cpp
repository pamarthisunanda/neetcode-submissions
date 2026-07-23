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

        if(visited[row][col]== true) return false;
        if(board[row][col]!= word[index]) return false;

    }

    bool exist(vector<vector<char>>& board, string word) {
        
    }
};
