class Solution {
public:
    int minimumSum(int num) {
        int c=num;
        vector<int>v;
        while(c!=0)
        {
            
            v.push_back(c%10);
            c/=10;
        }
        
        sort(v.begin(),v.end());
        int min=v[0]*10+v[3]+v[1]*10+v[2];
        return min;
    }
};