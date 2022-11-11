class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int k=s.size();
        
        copy(s.begin(),s.end(),nums.begin());
        
        return k;
    }
};