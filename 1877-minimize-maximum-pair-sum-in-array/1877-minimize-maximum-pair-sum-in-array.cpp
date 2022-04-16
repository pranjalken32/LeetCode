class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(int i=0,j=nums.size()-1;i<j;i++,j--){
            v.push_back(nums[i]+nums[j]);
        }
        int ans=*max_element(v.begin(),v.end());
        return ans;
    }
};