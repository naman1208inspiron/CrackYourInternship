class Solution 
{   
    bool isValid(int x, int y, vector<vector<int>>&vis, int n){
        if(x>=0 && x<n && y>=0 && y<n && vis[x][y]==-1) return true;
        
        return false;
    }
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&k,vector<int>&t,int n)
	{
	    int tx= t[0]-1, ty= t[1]-1;
	    int kx= k[0]-1, ky= k[1]-1;
	    
	    if(tx== kx && ty==ky) return 0;
	    int ans = 0; 
	    
	    vector<vector<int>> vis(n, vector<int> (n, -1));
	    int dx[8]= {-2, -1, 2, 1, 2, 1, -2, -1};
	    int dy[8]= {1, 2, 1, 2, -1, -2, -1, -2};
	    
	    queue<pair<int, int>> q;
	    q.push({kx, ky});
	    vis[kx][ky]=1;
	    
	    while(!q.empty()){
	       int size= q.size();
	       ans++;
	       
	       while(size--){
	           int x= q.front().first;
    	       int y= q.front().second;
    	       q.pop();
    	       
    	       for(int i=0; i<8; i++){
    	           int nx= x+dx[i];
    	           int ny= y+dy[i];
    	           
    	           if(nx== tx && ny==ty) return ans;
    	           
    	           if(isValid(nx, ny, vis, n)){
    	               q.push({nx, ny});
    	               vis[nx][ny]=1;
    	           }
    	       }
	       }
	       
	    }
	    return ans;
	}
};
