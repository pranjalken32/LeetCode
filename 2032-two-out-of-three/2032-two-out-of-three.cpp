class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int ,set<int>> x;
        vector<int>res;
        for(int i=0;i<nums1.size();i++)
        {
            x[nums1[i]].insert(1);
        }
        for(int i=0;i<nums2.size();i++)
        {
            x[nums2[i]].insert(2);
        }
        for(int i=0;i<nums3.size();i++)
        {
            x[nums3[i]].insert(3);
        }
        
        for(auto i :x)
        {
            if(i.second.size() >=2)
                res.push_back(i.first);
        }
        
        return res;
    }
};