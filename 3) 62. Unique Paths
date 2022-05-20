class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>>v(m, vector<int>(n,-1));
        return sol(0,0,m,n, v);
    }
    int sol(int i, int j, int m, int n, vector<vector<int>> &v){
        
        if(i==m-1 && j==n-1) return 1;
        if(i==m || j==n) return 0;
        
        if(v[i][j]!= -1) return v[i][j];
        
        int down= sol(i+1, j, m, n, v);
        int right= sol(i, j+1, m, n, v);
        
        return v[i][j]= down+right;
    }
};
