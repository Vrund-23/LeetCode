vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto edge:edges){
            int u = edge[0], v= edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            vector<int> vis(n,0);
            vis[i] = 1;
            queue<pair<int,int>> q;
            q.push({i,0});
            int dist = 0;
            while(!q.empty()){
                auto[node,depth] = q.front();
                dist += depth;
                q.pop();
                for(auto it : adj[node]){
                    if(!vis[it]){
                        vis[it] = 1;
                        q.push({it,depth+1});
                    }
                }
            }
            res.push_back(dist);
        }
        return res;
    }