class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0, j=nums.size()-1,c=0;
        while(i<j)
        {
            if(nums[i]+nums[j]<k)
                i++;
            else if(nums[i]+nums[j]>k)
                j--;
            else
            {
                c++;
                i++;
                j--;
            }
        }
        return c;
    }
};