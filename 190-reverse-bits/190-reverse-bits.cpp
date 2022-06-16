class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long long ans=0,bit=0,i=0,c=32;
        while(c--)
        {
            if(n>0)
            {
            bit=n&1;
            ans= ans | bit<<(31-i);
            i++;
           n= n>>1;
            }
        }
        return ans;
    }
};