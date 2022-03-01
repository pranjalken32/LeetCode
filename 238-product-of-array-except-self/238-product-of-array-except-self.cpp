class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v;
        v.resize(nums.size());
        int count=0;
        int flag=0,product=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            count++;
        }
        if(count>1)
            v.assign(nums.size(),0);
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==0)
                    flag++;
                else
                    product*=nums[i];
                    
            }
        
        for(int i=0;i<nums.size();i++)
        {
            if(flag>0 && nums[i]==0)
            v[i]=product;
            
            else if(flag>0 && nums[i]!=0)
                v[i]=0;
            else
                v[i]=product/nums[i];
        }
        }
        return v;
    }
};