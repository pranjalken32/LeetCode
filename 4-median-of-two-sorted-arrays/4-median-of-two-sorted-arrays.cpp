class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
          vector<int>nums3;
        nums3.insert(nums3.begin(),nums1.begin(),nums1.end());
        nums3.insert(nums3.end(),nums2.begin(),nums2.end());
        sort(nums3.begin(),nums3.end());
        int n= nums3.size();
        double x=0.0;
        if(n%2 != 0){
            x= double(nums3[int(n/2)]);
            return x;
        }
        else{
            x= double((nums3[int(n/2)]+nums3[int(n/2)-1])/2.0);
            return x;
        }
        
    }
};