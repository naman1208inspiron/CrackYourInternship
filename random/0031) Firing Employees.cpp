class Solution{   
public:
    bool isPrime(int n){
        for(int i=2; i*i<=n; i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int firingEmployees(vector<int> &arr, int n){
        vector<int> adj[n+1];
        queue<pair<int, int>> q;// rank, count_of_seniors.
        int ans=0;
        for(int i=0; i<n; i++){
            adj[arr[i]].push_back(i+1);
            if(arr[i]==0) q.push({i+1, 0});
        }
        while(!q.empty()){
            int rank= q.front().first;
            int parent= q.front().second;
            q.pop();
            
            if(parent!=0 && isPrime(rank + parent)) ans++;
            for(int it: adj[rank]) q.push({it, parent+1});
        }
        return ans;
    }
};
