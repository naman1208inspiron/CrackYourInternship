class Solution {
  public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // given connected compenents only 
        vector<int> vis(V, 0), ans;
        dfs(vis, ans, adj, 0);
        return ans;
    }
    void dfs(vector<int>& vis, vector<int>&ans, vector<int> adj[], int i){
        vis[i]= 1;
        ans.push_back(i);
        for(auto it: adj[i]){
            if(!vis[it]) dfs(vis, ans, adj, it);
        }
    }
};
