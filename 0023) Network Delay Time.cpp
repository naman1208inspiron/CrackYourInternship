//`````````````````````using priotity queue`````````````````````````````
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int, int>> adj[n+1];
        for(auto it: times){
            adj[it[0]].push_back({it[1], it[2]});
        }
        
        vector<int> dist(n+1, INT_MAX), vis(n+1, 0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        // insert distance, node pair in pq
        pq.push({0, k});
        dist[k]=0; 
        
                                 
        while(!pq.empty()){
            int dis= pq.top().first;
            int node= pq.top().second;
            pq.pop();
            
            if(vis[node]) continue;
            vis[node]= 1;
            
            for(auto it: adj[node]){
                int nextNode= it.first;
                int nextDis= it.second;
                if(dist[nextNode]> dist[node]+ nextDis){
                // dist[nextNode]> dis+ nextDis
                    dist[nextNode]= dist[node]+ nextDis;
                    pq.push({dist[nextNode], nextNode});
                }
            }
        }
        int minTime= -1;
        for(int i=1; i<=n; i++){
            if(dist[i]== INT_MAX) return -1;
            minTime= max(dist[i], minTime);
        }
        return minTime;
    }
};

//````````````````````````using set````````````````````````````
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int, int>> adj[n+1];
        for(auto it: times){
            adj[it[0]].push_back({it[1], it[2]});
        }
        
        vector<int> dist(n+1, INT_MAX), vis(n+1, 0);
        set<pair<int, int>> s;
        
        // insert distance, node pair in pq
        s.insert({0, k});
        dist[k]=0; 
        
                                 
        while(!s.empty()){
            auto element= *s.begin();
            int dis= element.first;
            int node= element.second;
            s.erase(s.begin());
            
            if(vis[node]) continue;
            vis[node]= 1;
            
            for(auto it: adj[node]){
                int nextNode= it.first;
                int nextDis= it.second;
                if(dist[nextNode]> dist[node]+ nextDis){
                // dist[nextNode]> dis+ nextDis
                    dist[nextNode]= dist[node]+ nextDis;
                    s.insert({dist[nextNode], nextNode});
                }
            }
        }
        int minTime= -1;
        for(int i=1; i<=n; i++){
            if(dist[i]== INT_MAX) return -1;
            minTime= max(dist[i], minTime);
        }
        return minTime;
    }
};
