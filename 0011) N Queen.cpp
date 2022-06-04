class Solution {
public:
    vector<vector<string>> solveNQueens(int n){
        vector<vector<string>> ans;
        string s(n, '.');
        vector<string> board(n, s);
        solve(board, ans, 0, n);
        return ans;
    }
    void solve(vector<string> &board, vector<vector<string>> &ans, int row, int n){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int col= 0; col<n; col++){
            if(isSafe(board, row, col)){
                board[row][col]= 'Q';
                solve(board, ans, row+1, n);
                board[row][col]= '.';
            }
        }
    }
    
    bool isSafe(vector<string>& board, int row, int col){
        int n= board.size();
        
        // cheking in that col...vertically
        for(int i=row; i>=0; i--){
            if(board[i][col]=='Q') return false;
        }

        // checking in left upper direction
        for(int i=row, j= col; i>=0 && j>=0; i--, j--){
            if(board[i][j]=='Q') return false;
        }
        
        // checking in right upper direction
        for(int i=row, j= col; i>=0 && j<n; i--, j++){
            if(board[i][j]=='Q') return false;
        }

        return true;
    }
};
