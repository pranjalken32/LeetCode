class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> nums3;
        int i=0,j=0;
        while(m>i && n>j)
        {
            if(nums1[i]<nums2[j])
            {
                nums3.push_back(nums1[i]);
                i++;
            }
            
            else if(nums1[i]>nums2[j])
            {
                nums3.push_back(nums2[j]);
                j++;
                
            }
            else
            {
                
                j++;
                nums3.push_back(nums1[i]);
            }
        }
            
            while(m>i)
            {
                nums3.push_back(nums1[i]);
                i++;
            }
            
            while(n>j)
            {
                nums3.push_back(nums2[j]);
                j++;
            }
            
           
            
            
        
        
        nums1=nums3;
        
    }
};