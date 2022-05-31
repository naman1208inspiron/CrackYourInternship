class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n=grid.size(), m= grid[0].size(), cnt_total=0, cnt_inserted=0, days=0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]!=0) cnt_total++;
                if(grid[i][j]==2) q.push({i,j});
            }
        }
        // down left right up
        int dx[]= {+1, 0, 0, -1};
        int dy[]= {0, -1, +1, 0};
        while(!q.empty()){
            int k= q.size();
            cnt_inserted+= k;
            while(k--){
                auto t= q.front(); q.pop();
                int row= t.first, col= t.second;
                for(int i=0; i<4; i++){
                    int nx= row+ dx[i];
                    int ny= col+ dy[i];
                    if(nx>= n || nx<0 || ny>= m || ny<0 || grid[nx][ny]!=1){
                        continue;
                    }
                    grid[nx][ny]=2;
                    q.push({nx, ny});
                }
            }
            if(!q.empty()){
            // this means that prev oranges have made some other orange rotten
                days++;
            }
        }
        return cnt_total==cnt_inserted ? days : -1;
    }
};
