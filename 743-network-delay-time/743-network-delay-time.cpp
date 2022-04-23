class Solution {
public:
    const int N=1e5+10;
        const int inf=1e7+10;
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<pair<int,int>>graph[N];
        for(auto vec : times)
        {
            graph[vec[0]].push_back({vec[1],vec[2]}); // (node,weight) format
        }
        
        vector<int>visited(N,0);
        vector<int> dist(N,inf);
        set<pair<int,int>>pq ;   //(weight,node) format
            pq.insert({0,k});
            dist[k]=0;
        while(pq.size()>0)
        {
            auto node = *pq.begin();
                int weight= node.first;
            int v=node.second;
            pq.erase(pq.begin());
            if(visited[v])
                continue;
            visited[v]=1;
            
            for(auto child : graph[v])
            {
                int v_child=child.first;
                int weight_child= child.second;
                if(weight+weight_child < dist[v_child])
                {
                    dist[v_child]=weight+weight_child;
                    pq.insert({dist[v_child],v_child});
            }
                
            }
        }
            int ans=0;
            for(int i=1;i<=n;i++)
            {
                if(dist[i]==inf)
                return -1;
                
                ans=max(ans,dist[i]);
            }
            
            
        return ans;
        
        
        
    }
};