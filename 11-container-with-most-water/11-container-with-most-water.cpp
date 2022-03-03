class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,max=0;
        int j=height.size()-1;
        while(i<j)
        {
            int ar;
            if(height[i]>height[j])
            {
                ar=(j-i)*height[j];
                j--;
            }
            else{
                ar=(j-i)*height[i];
                i++;
            }
                if(ar>max)
                    max=ar;
        }
        return max;
    }
};