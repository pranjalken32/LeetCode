class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>x;
        int s=0;
        for(int i=0;i<heights.size();i++)
        {
            x.push_back(heights[i]);
            
        }
        
        sort(x.begin(),x.end());
        for(int i=0;i<heights.size();i++)
        {
        if(heights[i]!= x[i])
            s++;
            
        }
        
        return s;
    }
};