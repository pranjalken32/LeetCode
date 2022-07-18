class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=INT_MIN,currproduct=1;
        for(int i=0;i<nums.size();i++)
        {
            currproduct*=nums[i];
            if(max<currproduct)
                max=currproduct;
            if(currproduct==0)
                currproduct=1;
        }
        currproduct=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            currproduct*=nums[i];
            if(max<currproduct)
                max=currproduct;
            if(currproduct==0)
                currproduct=1;
        }
        
        return max;
    }
};