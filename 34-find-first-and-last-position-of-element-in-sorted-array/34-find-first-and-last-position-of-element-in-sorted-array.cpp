class Solution {
public:
    int lbinary ( vector<int> &nums , int target )
    {
        int low = 0 , high = nums.size()-1 , a = -1;
        while ( low <= high )
        {
            int mid = ( (high-low)/2 ) + low ; 
            if ( nums[mid] >= target )
            {
                if ( nums[mid] == target )
                {
                    a = mid ;
                }
                high = mid-1 ; 
            }
            else 
                low = mid+1 ; 
        }
        return a ; 
    }
    int rbinary ( vector<int> &nums , int target )
    {
        int low = 0 , high = nums.size()-1 , a = -1 ;
        while ( low <= high )
        {
            int mid = ( (high-low)/2 ) + low ; 
            if ( nums[mid] <= target )
            {
                if ( nums[mid] == target )
                {
                    a = mid ; 
                }
                low = mid+1 ; 
            }
            else high = mid-1 ;
           
        }
        return a ; 
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> v ;
        v.push_back ( (lbinary(nums,target)) ) ;
        v.push_back ((rbinary(nums,target)) ) ;
        return v ; 
    }
};