class Solution {
public:
    int dis[200005];
    vector<pair<int,int>>adj[200005];
    long long dp[200005];
    int dfs(int node,int n)
    {
        if(node == n)
        {
          return 1;  
        }
        int ans = 0;
        if(dp[node] != -1)
        {
            return dp[node];
        }
        for(auto child  : adj[node])
        {
            if(dis[child.first] < dis[node])
            {
              ans = (ans + dfs(child.first , n)%1000000007)%1000000007;
            }
        }
        return dp[node] = ans%1000000007;
    }
    void djikstra(int source)
    {
        dis[source] = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0, source});
        while(!pq.empty())
        {
            int u = pq.top().second;
            pq.pop();
            for(auto child : adj[u])
            {
                int v = child.first;
                int weight = child.second;
                if(dis[v] > dis[u] + weight)
                {
                    dis[v]  = dis[u] + weight;
                    pq.push({dis[v] , v});
                }
            }
        }
    }
    int countRestrictedPaths(int n, vector<vector<int>>& edges)
    {
        for(int i = 1 ; i <= n ; i++)
        {
            dis[i] = INT_MAX;
            adj[i].clear();
        }
        for(int i = 0 ; i < edges.size(); i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            adj[u].push_back({v, wt});
            adj[v].push_back({u,wt});
        }
        djikstra(n);
        /*for(int i = 1; i <=n ; i++)
        {
            cout << dis[i] << " ";
        }
        */
        memset(dp, -1 , sizeof(dp));
        long long ans = dfs(1,n);
        return ans;
        
    }
    
};
