class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n= graph.size();
        vector<int> color(n, -1);
        for(int i=0; i<n; i++){
            if(color[i]==-1){
                if(bipartite(color, i, graph)==false) 
                    return false;
            }
        }
        return true;
    }
    
    bool bipartite(vector<int>&color, int node, vector<vector<int>> &graph){
        
        queue<int> q;
        q.push(node);
        color[node]= 1;
        
        while(!q.empty()){
            node= q.front(); q.pop();
            for(int it: graph[node]){
                if(color[it] == -1){
                    color[it] = 1- color[node];
                    q.push(it);
                }
                else if(color[it] == color[node])
                    return false;
            }
        }
        return true;
    }
};
