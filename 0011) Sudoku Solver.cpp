class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>&board){
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                //finding the empty cell
                if(board[i][j]=='.'){
                    //now checking if we can place any number from 1 to 9
                    for(char c='1'; c<='9'; c++){
                        if(isValid(i, j, c, board)){
                            board[i][j]= c;
                            bool canSolve= solve(board);
                            if(!canSolve){
                                board[i][j]= '.';
                            }
                            else{
                                //means suduko has been solved completely
                                return true;
                            }
                        }
                    }
                    //if we come out of this for loop, it means that no char can be placed ....so returning false cuz the previous element placed was not correct
                    return false;
                }
            }
        }
        // if we came out of this for loop, it means that we have not found any empty cell, so the suduko is solved 
        return true;
    }
    bool isValid(int row, int col, char c, vector<vector<char>>&board){
        for(int i= 0; i<9; i++){
            if(board[row][i]==c) return false;
            if(board[i][col]==c) return false;
            if(board[3*(row/3) + i/3][3*(col/3) + i%3]== c) return false;
        }
        return true;
    }
    
};
