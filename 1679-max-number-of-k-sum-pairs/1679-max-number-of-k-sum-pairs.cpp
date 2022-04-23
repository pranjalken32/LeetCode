class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(k-nums[i])>0)
            {
                ans++;
                if(mp[k-nums[i]]>1)
                    mp[k-nums[i]]--;
                else
                    mp.erase(k-nums[i]);
            }
            else
            {
                    mp[nums[i]]++;
                
            }
        }
        return ans;
    }
};