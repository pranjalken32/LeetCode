class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
         priority_queue<pair<int,int>>p;
        for(auto i : mp)
        {
            p.push({i.second,i.first});       
        }
        while(!p.empty() && v.size()<k)
        {
            v.push_back(p.top().second);
            p.pop();   
        }
        return v;
    }
};