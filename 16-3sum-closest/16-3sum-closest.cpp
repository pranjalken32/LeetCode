class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(),nums.end());
		int min_df=INT_MAX,n=nums.size();
		int ans=0;
		int j=0,k=0;
		for(int i=0;i<(n-2);i++){
			j=i+1;k=(n-1);
			while(j<k){
				int n=nums[i]+nums[j]+nums[k];
				if(abs(target-n)<min_df) {
					min_df=abs(target-n);
					ans=n;
				}
				if(n>target) k--;
				else j++;
			}
		}
		return ans;
	}
};