class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
    vector<vector<pair<int,double>>>graph(n);
    vector<double>dist(n,-1);
    for(int i=0;i<edges.size();i++)
    {
        graph[edges[i][0]].push_back({edges[i][1],succProb[i]});
        graph[edges[i][1]].push_back({edges[i][0],succProb[i]});
    }
    set<pair<int,double>>s;
    dist[start]=1;
    s.insert({start,1});
    while(!s.empty())
    {
        auto x=*(s.begin());
        s.erase(x);
        for(auto it:graph[x.first])
        {
            if(dist[it.first]<dist[x.first]*it.second)
            {
                s.erase({it.first,dist[it.first]});
                dist[it.first]=dist[x.first]*it.second;
                s.insert({it.first,dist[it.first]});
            }
        }
    }
        if(dist[end]==-1)
        {
            return 0;
        }
    return dist[end];
    }
};