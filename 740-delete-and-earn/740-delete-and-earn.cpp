class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> frequencyMap(10001, 0);
        int dp[10001];
        
        for(auto num : nums)
            frequencyMap[num]++;
        
        dp[0] = 0;
        dp[1] = frequencyMap[1];
        
        for(int i=2;i<10001;i++)
            dp[i] = max(dp[i-2]+i*frequencyMap[i], dp[i-1]);
        
      return dp[10000];
        
    }
};