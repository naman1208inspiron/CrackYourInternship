class Solution {
    int dx[4]= {0, 0, 1, -1};
    int dy[4]= {1, -1, 0, 0};
    
    bool solve(int x, int y, string word, vector<vector<char>>& board, int ind, vector<vector<int>>&vis){
        //base condition
        if(ind == word.size()) return true;
        
        int m= board.size(), n= board[0].size();
        vis[x][y]= 1;
        
        for(int i=0; i<4; i++){
            int nx= x+dx[i], ny= y+dy[i];
            if(nx<m && nx>=0 && ny<n && ny>=0 && board[nx][ny]== word[ind] && vis[nx][ny]!=1){
                if(solve(nx, ny, word, board, ind+1, vis)) return true;
            }
        }
        vis[x][y]=0;
        return false;
    }
    
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m= board.size(), n= board[0].size();
        vector<vector<int>> vis(m, vector<int> (n, 0));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                //if first char found
                if(board[i][j]== word[0]){
                    //search recursively for next char --> here 1 stands for the next index to be found.
                    if(solve(i,j, word, board, 1, vis)) return true;
                }
            }
        }
        return false;
    }
    
};
