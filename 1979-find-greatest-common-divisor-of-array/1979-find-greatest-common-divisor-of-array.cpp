class Solution {
public:
    int findGCD(vector<int>& nums) { 
    sort(nums.begin(),nums.end());
        int a,b,c=1;
        int n=nums.size();
        a=(nums[0]);
        b=(nums[n-1]);
        for(int i=2;i<=b;i++){
            if(((a%i) == 0) && ((b%i) == 0)){
                c=i;
            
        }
        }
        return c;
    
        
    }
};