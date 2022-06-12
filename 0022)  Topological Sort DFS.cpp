class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> ans, vis(V, 0);
	    stack<int> st;
	    for(int i=0; i<V; i++){
	        if(!vis[i]) dfs(vis, adj, st, i);
	    }
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
	void dfs(vector<int>& vis, vector<int> adj[], stack<int>&st, int i){
	    vis[i]= 1;
	    for(int it: adj[i]){
	        if(!vis[it]) dfs(vis, adj, st, it);
	    }
    // just inserting the element in the stack after calling dfs for all its adjacent nodes.
	    st.push(i);
	}
};
