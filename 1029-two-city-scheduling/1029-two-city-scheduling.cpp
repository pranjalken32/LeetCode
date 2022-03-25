class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        vector<int> v;
        int mincost=0;
        for(int i=0;i<costs.size();i++)
        {
            mincost+=costs[i][0];
        }
        
        for(int i=0;i<costs.size();i++)
            v.push_back(costs[i][1]-costs[i][0]);
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<costs.size()/2;i++)
        {
            mincost+=v[i];
        }
        
        return mincost;
    }
};