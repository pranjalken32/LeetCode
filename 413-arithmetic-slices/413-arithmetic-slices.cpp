class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        if(nums.size()<3)
            return 0;
        int c=0,pair=0;
        int pre= nums[0]-nums[1];
        
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i-1]-nums[i]== pre)
                c++;
            else{
                pre=nums[i-1]-nums[i];
                c=0;
                
                
            }
            pair+=c;
        }
        return pair;
        
    }
};