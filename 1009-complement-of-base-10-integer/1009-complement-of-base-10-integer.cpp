class Solution {
public:
    int bitwiseComplement(int n) {
        int mask=0;
        if(n==0)
            return 1;
        while(mask<n)
        {
            mask=(mask<<1)| 1;
            
        }
        int ans = (~n) & mask;
        return ans;
    }
};