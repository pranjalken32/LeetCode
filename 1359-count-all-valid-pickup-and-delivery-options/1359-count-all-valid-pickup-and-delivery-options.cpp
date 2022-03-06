class Solution {
public:
    int countOrders(int n) {
    int mod=1e9+7;
    long long ans=1;
    int a=1;
    int b=n;
    while(b){
        ans*=b;
        ans%=mod;
        b--;
        
    }
    cout<<a<<endl;;
    for(int i=1;i<=2*n;i=i+2){
        ans*=(2*n-i);
        ans%=mod;
        // cout<<ans<<" ";
    }
    return ans;
        

        
    }
};