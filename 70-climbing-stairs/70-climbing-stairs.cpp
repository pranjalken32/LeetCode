class Solution {
public:
    int climbStairs(int n) {
        int a[100];
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        a[0]=1;
        a[1]=1;
        a[2]=2;
        
        for(int i=2;i<=n;i++)
        {
            a[i]=a[i-2]+a[i-1];
        }
        
        return a[n];
        
    }
};