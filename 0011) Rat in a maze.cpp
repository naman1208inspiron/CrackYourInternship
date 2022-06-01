class Solution{
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0]==0) return ans;
        string temp="";
        vector<vector<int>> vis(n, vector<int>(n, 0));
        solve(temp, ans, 0, 0, m, n, vis);
        return ans;
    }
    void solve(string temp, vector<string>&ans, int i, int j, vector<vector<int>>&m, int n, vector<vector<int>>&vis){
        // if(i<0 || j<0 || i>=n || j>=n) return;
        if(i==n-1 && j==n-1){
            ans.push_back(temp);
            return;
        }
        // downward
        if(i+1<n && m[i+1][j]==1 && vis[i+1][j]==0){
            vis[i][j]=1;
            solve(temp+'D', ans, i+1, j, m, n, vis);
            vis[i][j]=0;
        }
        //leftward
        if(j-1>=0 && m[i][j-1]==1 && vis[i][j-1]==0){
            vis[i][j]=1;
            solve(temp+'L', ans, i, j-1, m, n, vis);
            vis[i][j]=0;
        }
        //rightward
        if(j+1<n && m[i][j+1]==1 && vis[i][j+1]==0){
            vis[i][j]=1;
            solve(temp+'R', ans, i, j+1, m, n, vis);
            vis[i][j]=0;
        }
        //upward
        if(i-1>=0 && m[i-1][j]==1 && vis[i-1][j]==0){
            vis[i][j]=1;
            solve(temp+'U', ans, i-1, j, m, n, vis);
            vis[i][j]=0;
        }
    }
};

``````````````````````BETTER APPROACH ==> `````````````````````````````````````
class Solution{
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        if(m[0][0]==0) return ans;
        //         D   L  R   U
        int di[]= {+1, 0, 0, -1};
        int dj[]= {0, -1, +1, 0};
        vector<vector<int>> vis(n, vector<int>(n, 0));
        solve(0,0, "", ans, vis, m, n, di, dj);
        return ans;
    }
    void solve(int i, int j, string temp, vector<string>&ans, vector<vector<int>>&vis, vector<vector<int>> &m, int n, int di[], int dj[]){
        if(i==n-1 && j==n-1){
            ans.push_back(temp);
            return;
        }
        string dir= "DLRU";
        for(int ind= 0; ind<4; ind++){
            //for loop will take all the possibilities of the moving directions
            int nexti= i+ di[ind];
            int nextj= j+ dj[ind];
            if(nexti>=0 && nexti<n && nextj>=0 && nextj<n && !vis[nexti][nextj] && m[nexti][nextj]==1){
                vis[i][j]=1;
                solve(nexti, nextj, temp+dir[ind], ans, vis, m, n, di, dj);
                vis[i][j]=0;
            }
        }
    }
};
