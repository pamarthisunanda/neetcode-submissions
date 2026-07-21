class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            unordered_map<char, int> seen;
        for(int j=0; j<9; j++){

char c=board[i][j];
if(c=='.') continue;
seen[c]++;
if(seen[c]>1) return false;
        }
    }

for(int j=0; j<9; j++){
            unordered_map<char, int> seen;
        for(int i=0; i<9; i++){

char c=board[i][j];
if(c=='.') continue;
seen[c]++;
if(seen[c]>1) return false;
        }
    }

for(int row=0; row<=6; row +=3){
    for(int column=0; column<=6; column +=3){
         unordered_map<char, int> seen;
for(int i=0; i<3; i++){
    
    for(int j=0; j<3; j++){
        char c=board[i+row][j+column];
        
        if(c=='.') continue;
        seen[c]++;
        if(seen[c]>1) return false;
    }
}
    }
}

return true;
    
    }
    
};
