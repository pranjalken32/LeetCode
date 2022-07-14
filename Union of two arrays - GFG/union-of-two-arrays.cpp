// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int nums1[], int n, int nums2[], int m)  {
        
         
        set<int> nums3;
        int i=0,j=0;
        while(n>i && m>j)
        {
            if(nums1[i]<nums2[j])
            {
                nums3.insert(nums1[i]);
                i++;
            }
            
            else if(nums1[i]>nums2[j])
            {
                nums3.insert(nums2[j]);
                j++;
                
            }
            else
            {
                
                nums3.insert(nums1[i]);
                i++;j++;
            }
            
        }
         while(n>i)
            {
                nums3.insert(nums1[i]);
                i++;
            }
            
            while(m>j)
            {
                nums3.insert(nums2[j]);
                j++;
            }
            
            
            return nums3.size();
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends