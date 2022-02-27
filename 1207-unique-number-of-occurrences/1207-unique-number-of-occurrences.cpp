class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        unordered_map<int,int>x;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto i: m)
        {
            x[i.second]++;
        }
        
        for(auto i : x)
        {
            if(i.second >1)
                return false;
        }
        
        return true;
    }
};