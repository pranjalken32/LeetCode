class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>x;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        for(auto i :m)
        {
            if(i.second==2)
                x.push_back(i.first);
        }
        return x;
    }
};