class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1, sum = 0, lMax = 0, rMax = 0;
        while(l <= r){
            lMax = max(height[l], lMax);
            rMax = max(height[r], rMax);
			 //why? because, for example if the lMax is smaller, we can sure that how much water could be trapped at the left pointer position is decided by the left side. 
            if(lMax < rMax){
                sum += lMax - height[l++];
            }else{
                sum += rMax - height[r--];
            }
        }
        return sum;
    }
};