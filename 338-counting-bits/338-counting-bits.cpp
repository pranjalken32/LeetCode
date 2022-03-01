class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>x;
        for(int i =0;i<=n;i++)
        {
            int num=i;
            int sum=0;
            
            while(num!=0)
            {
                sum+=num%2;
                num/=2;
            }
            x.push_back(sum);
        }
        return x;
    }
};