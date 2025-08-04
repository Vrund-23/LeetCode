bool dfs(int node,int d,vector<int> adj[],vector<int> &vis){
        if(node == d) return true;
        vis[node] = 1;
        for(auto it : adj[node]){
            if(!vis[it]){
                if(dfs(it,d,adj,vis)) return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // create adjList
        vector<int> adj[n];
        for(auto it : edges){
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // dfs
        vector<int> vis(n,0);
        return dfs(source,destination,adj,vis);
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) { 
        // create adjList
        vector<int> adj[n];
        for(auto it : edges){
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(n,0);
        queue<int> q;
        q.push(source);
        vis[source] = 1;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            if(node == destination){
                return true;
            }
            for(auto it : adj[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
        return false;
    }