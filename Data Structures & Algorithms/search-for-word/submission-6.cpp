class Solution {
public:

    bool dfs(int row, int col, int index, vector<vector<bool>>& visited(board.size(), vector<bool>(board[0].size, false)), string 
    
    & word, vector<vector<char>>& board){

        if(index== word.size()){
            return true;
        }

        if(row<0 || row>= board.size() || col<0 || col>= board[0].size()){
            return false;
        }

        for(int i-0; i<board,size(); i++){
            for(int j-0; j<board.size; j++){
                if(visited[row][col]==true) return false;
        if(board[row][col]!= word[index]) return false;

        visited[row][col]=false;
       if(dfs(i-1, j, index+1, visited, word, board)) return true;
       visited[row][col]=false;

       if(dfs(i+1, j, index+1,visited, word, board)) return true;
       visited[row][col]=false;

       if(dfs(i, j-1,index+1, visited, word, board)) return true;
       visited[row][col]=false;

       if(dfs(i, j+1, index+1,visited, word, board)) return true;
       visited[row][col]=false;

    
            }
        }

        
       return false;

    }

    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>>& visited;
       return  dfs(0, 0, 0, visited, word, board);
        
    }
};
