class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int c;
        vector<int> x;
        for(int i=0,j=n;i<n,j<2*n;i++,j++)
        {
            x.push_back(nums[i]);
            x.push_back(nums[j]);
            
            
            
            
        }
        return x;
        
    }
};