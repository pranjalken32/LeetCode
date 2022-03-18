class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            int min=i;
            for(int j=i;j<n;j++)
            {
                if(nums[min]>nums[j])
                    min=j;
                
                
            }
            swap(nums[min],nums[i]);
        }
        
    }
};