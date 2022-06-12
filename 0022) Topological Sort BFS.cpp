class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> topo, indegree(V,0);
	    for(int i=0; i<V; i++){
	        for(int it: adj[i]){
	            indegree[it]++;
	        }
	    }
	    queue<int> q;
	    for(int i=0; i<V; i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    while(!q.empty()){
	        int node= q.front(); q.pop();
	        topo.push_back(node);
	        for(int it: adj[node]){
	            indegree[it]--;
	            if(indegree[it]==0) q.push(it);
	        }
	    }
	    return topo;
	}
};
