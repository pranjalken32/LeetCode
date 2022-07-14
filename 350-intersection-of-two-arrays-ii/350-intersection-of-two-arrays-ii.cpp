class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
          vector<int> nums3;
        
        int mn[1001]={0};
        
        for(auto x : nums1)
            mn[x]++;
        
        
        for(auto y : nums2)
        {
            if(mn[y]>0)
            {
            nums3.push_back(y);
                mn[y]--;
            }
        }
       
        return nums3;
    }
};