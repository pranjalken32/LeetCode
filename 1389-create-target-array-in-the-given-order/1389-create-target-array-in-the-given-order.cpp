class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>x;
        for(int i=0;i<nums.size();i++)
        {
            x.insert(x.begin()+index[i],nums[i]);
        }
        return x;
        
    }
};