class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int edges= connections.size();
        if(edges < n-1) return -1;
        
        vector<int> adj[n];
        for(auto it: connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        int component=0;
        vector<int> vis(n, 0);
        for(int i=0; i<n; i++){
            if(!vis[i]){
                dfs(adj, vis, i);
                component++;
            }
        }
        
        if(edges< component-1) return -1;
        return component-1;
        
    }
    void dfs(vector<int> adj[], vector<int>&vis, int node){
        vis[node]=1;
        for(int it: adj[node]){
            if(!vis[it]){
                vis[it]=1;
                dfs(adj, vis, it);
            }
        }
    }
};
