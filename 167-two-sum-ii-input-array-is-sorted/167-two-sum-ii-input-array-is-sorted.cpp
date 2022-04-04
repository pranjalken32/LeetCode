class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     int l=0,r=numbers.size()-1;
        vector<int>v;
        while(l<=r)
        {
            if(target==numbers[l]+numbers[r])
            {
                v.push_back(l+1);
                v.push_back(r+1);
                break;
            }
            else if(target<numbers[l]+numbers[r])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return v;
    }
};