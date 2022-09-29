class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int i,j;
        i=0;
        int n = arr.size();
        
        while(i<n && arr[i] <= x) i++;
        
        j = i-1;
        while(k)
        {
            if(j < 0)
            {
                ans.push_back(arr[i++]);
                k--;
                continue;
            }
            if(i >= n)
            {
                ans.push_back(arr[j--]);
                k--;
                continue;
            }
            
            if(abs(arr[j]-x) <= abs(arr[i]-x))
            {
                ans.push_back(arr[j]);
                j--;
                k--;
            }
            else
            {
                ans.push_back(arr[i]);
                k--;
                i++;
            }
        }
        
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};