class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int x= *max_element(nums.begin(), nums.end());
        int add;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=x)
            {
                if(x < nums[i]*2 )
                    return -1;
            }
            else
               add=i; 
        }
        return add;
    }
};