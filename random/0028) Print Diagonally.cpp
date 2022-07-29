class Solution{
	int dx[2]= {0,1};
	int dy[2]= {1,0};
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> v)
	{
	    vector<int> ans;
	    vector<vector<int>> vis(n, vector<int> (n, 0));
		queue<pair<int, int>> q;
		q.push({0,0}); vis[0][0]= 1;
		
		while(!q.empty()){
		    int x= q.front().first, y= q.front().second;
		    q.pop();
		    ans.push_back(v[x][y]);
		    
		    for(int i=0; i<2; i++){
		        int nx= x+dx[i], ny= y+dy[i];
		        if(nx >=n || ny>=n || vis[nx][ny]) continue;
		        vis[nx][ny]= 1;
		        q.push({nx, ny});
		    }
		}
		return ans;
	}

};
