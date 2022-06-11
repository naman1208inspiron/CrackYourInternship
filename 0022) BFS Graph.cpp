class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> vis(V, 0), ans;
        // for(int i=0; i<V; i++){
             bfs(vis, ans, adj, 0);
        // }
        return ans;
    }
    void bfs(vector<int>&vis, vector<int>& ans, vector<int> adj[], int i){
        queue<int> q;
        q.push(i);
        vis[i]=1;
        
        while(!q.empty()){
            
            i= q.front(); q.pop();
            ans.push_back(i);
            
            for(auto it: adj[i]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it); 
                }
            }
        }
    }
};
