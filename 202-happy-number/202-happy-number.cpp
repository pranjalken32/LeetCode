class Solution {
public:
    int solve(int n)
{
int sum=0;
while(n!=0)
{
int temp=n%10;
 n /=10;
sum +=temp * temp;
}
return sum;
}
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=solve(slow);
            fast=solve(solve(fast));
            
        }
        while(slow!=fast);
        if(slow== 1)
            return true;
        else
            return false;
            
        
        
    }
};