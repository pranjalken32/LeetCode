class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
          set<int> nums3;
        
        int mn[1001]={0};
        
        for(auto x : nums1)
            mn[x]++;
        
        
        for(auto y : nums2)
        {
            if(mn[y]!=0)
            nums3.insert(y);    
        }
        vector<int> v(nums3.begin(),nums3.end());
        return v;
    }
};


