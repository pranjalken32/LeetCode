class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<arr.size();i++)
        {
            if(i+2 < n)
            {
                if(arr[i]%2==1 && arr[i+1]%2==1 && arr[i+2]%2==1)
                    return true;
            }
        }
        return false;
        
    }
};