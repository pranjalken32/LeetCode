class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n=nums.size();
        int product=1;
        int max_product=INT_MIN;
        for(int i=0;i<n;i++)
        {
            product*=nums[i];
            if(max_product<product)
                max_product=product;
            if(product==0)
                product=1;
        }
        product=1;
        for(int i=n-1;i>=0;i--)
        {
            product*=nums[i];
            max_product=max(product,max_product);
            if(product==0)
                product=1;
        }
        
        return max_product;
    }
};